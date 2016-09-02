import rhinoscriptsyntax as rs
import random as rand
import math

#/// 创建一个收集实体的list
objs = []
#///离散得到满足规范的楼梯踏步与踢面的尺寸
step_size = []
#///以下为住宅楼梯规范
for t in xrange(180,360,3):
    for r in xrange(120,210,3):
        if (550<=t+2*r<=650) and (r/t <=(7/11)):
            step_size.append((t,r))
            #print ("踏面:%s,阶高:%s"%(t,r))

#///给出一个box，box 有length,width,height三个属性，让楼梯限制在三个属性内，后面有反馈误差
#///在尺寸满足的前提下，根据给出的box_width和box_length得到楼梯的步数
countList = []
for count in xrange(0,20):
    for i in xrange(len(step_size)):
        #///用tolerance来控制精度
        if (abs((count-1)*step_size[i][0]+platformWidth-box_width)<=tolerance) and (abs((count*2*step_size[i][1])-box_height)<=tolerance ):
            countList.append((count,step_size[i][0],step_size[i][1]))
seed = rand.choice(countList) #/// random.choice()随机  怎么做到随机   
print (seed)    #///但是这里有没有随机的意义？

#///记录下初始的box长宽高三属性,能够在后面反馈出误差
init_l = box_length
init_w = box_width
init_h = box_height


#///对stairsLength进行修正
#///在distance>0的情况下，boxWidth改变对间距和楼梯宽的权重
if (stairsLength*2+distance != box_length) and(distance>0):
    dist = stairsLength*2+distance-box_length
    #if distance>=0:
    distance -=dist*0.4
    stairsLength -=dist*0.3
#///如果间距不存在了，给他一个固定的间距。正确情况是，box_length如果太小了，保持梯段的宽度，缩小间距   
if (distance<=20):
    distance = 500
    stairsLength = (box_length-distance)/2
    #///正确情况是，box_length如果太小了，保持梯段的宽度，缩小间距 
    if stairsLength <=1000:
        stairsLength = 1000
        distance = (box_length-2*stairsLength)
        #///如果这个时候间距也小于20了,程序不能运行
        if distance<20:
            distance = 20
            print ("Error:%s"% "there is no distance betweeen stairs")

#///根据平台宽度需要大于等于楼梯宽度的规范，进行函数制约       ##########Error#########
def PlatformWidth():
    pass

#索引countList第一个值，得到踏步的尺寸和数量
stepCount,stepWidth,stepHeight = seed[0],seed[1],seed[2]


#///重新给box的三个属性赋值
box_width = (stepCount-1)*stepWidth + platformWidth
box_length = (stairsLength*2+distance) 
#distance = box_length-stairsLength*2
box_height = stepCount*2*stepHeight
#///插写梯段厚的函数
slope_cos = ((stepCount-1)*stepWidth)/math.sqrt((box_height*0.5)**2+((stepCount-1)*stepWidth)**2)#///坡度的余弦值
thick = stairsThickness/slope_cos



def AddStairsPts(x_direction=False): 
    """
    Parameters:
        x_direction = False --> down True -->up
    return:
        stair_step pts
    """
    #first save coordinate
    pts_x = []
    pts_z = []
    platPt_xz = []

    #先对楼梯的走向进行一个判断，下面生成梯段的时候调用同一函数，但输入的参数不同
    if x_direction == True:
        dist = distance
        plat_xyz = ((stepCount - 1) * stepWidth,dist,(stepCount * stepHeight))
        k = -1
    else:
        plat_xyz = (0,0,0)
        k = 1
        dist = 0 #确保第一个梯段不会移动
    for j in xrange(stepCount):
        pt_x1 = pt_x2 = plat_xyz[0] + k * j * stepWidth
    
        pts_x.append(pt_x1)
        pts_x.append(pt_x2)
    
        if j == 0:
            pt_z1 = plat_xyz[2] - thick
        else:
            pt_z1 = plat_xyz[2] + j * stepHeight
        if j == stepCount - 1:
            pt_z2 = pt_z1 - thick ####R### 厚度需要根据坡度建立三角函数关系
        else:
            pt_z2 = plat_xyz[2] + j * stepHeight + stepHeight
        pts_z.append(pt_z1)
        pts_z.append(pt_z2)

    #add points ,still need to revise to doubles!
    pts = []
    for i in xrange(len(pts_z)):    #///尽量把循环写在一个循环里
        pt = rs.AddPoint(pts_x[i],dist,pts_z[i]) 
        #print (pts_x[i],0,pts_z[i])
        pts.append(pt)
    return pts

a = AddStairsPts(False)#第一个梯段
b = AddStairsPts(True)#第二个梯段

def StairsPolyLine(*ptLists):
    """
    Parameters:
        ptLists = stairsStep points
    Returns:
        list:polyline of all stairs step
    """
    pls = []
    for ptList in ptLists:
        ptList = list(ptList)
        
        #repeat the first point in one stair
        ptList.append(ptList[0])
        #create polyline with pts,must care about DataStructure
        pl = rs.AddPolyline(ptList)
        pls.append(rs.AddPolyline(ptList))
        
    return pls   

lines = StairsPolyLine(a,b)

"""
def boundaryExtrude(polyline,path): ###R###
    surf = rs.AddPlanarSrf(polyline)
    #path = rs.AddCurve([(0,stairsLength,0),(0,0,0)]) 
    #polyline_brep = rs.coercebrep(polyline,True)
    #polyline = rs.coercecurve(polyline,-1)
    subs = rs.ExtrudeCurve(polyline,path) #//////版本问题 why rs.ExtrudeSurface can't be used
    
    return subs
    
#bou = boundaryExtrude(line)
"""

def ExtrudeStairs(polyline,bool):
    #这个函数写成list的形式，有点面向过程，但先试试看,
    #不能同时带入两个可变参
    if bool == True:
        path_stairs = rs.AddCurve([(0,0,0),(0,stairsLength,0)])
    else:
        path_stairs = rs.AddCurve([(0,stairsLength,0),(0,0,0)])
    stairs = rs.ExtrudeCurve(polyline,path_stairs)
    return stairs

#stairsStep = ExtrudeStairs(lines,False,True)
stairs1_step = ExtrudeStairs(lines[0],False)
stairs2_step = ExtrudeStairs(lines[1],True)

def platform():     #///函数要写上形参
    #add platform points orderly
    
    pts_list = []
    plat_pt1 = ((stepCount-1)*stepWidth,-stairsLength,(stepCount*stepHeight))
    plat_pt2 = (plat_pt1[0]+platformWidth,-stairsLength,plat_pt1[2])
    plat_pt3 = (plat_pt2[0],-stairsLength,plat_pt2[2]-(beamHeight+platformThickness))
    plat_pt4 = (plat_pt3[0]-beamWidth,-stairsLength,plat_pt3[2])
    plat_pt5 = (plat_pt4[0],-stairsLength,plat_pt4[2]+beamHeight)
    plat_pt6 = (plat_pt5[0]-platformWidth+2*beamWidth,-stairsLength,plat_pt5[2])
    plat_pt7 = (plat_pt6[0],-stairsLength,plat_pt3[2])
    plat_pt8 = (plat_pt1[0],-stairsLength,plat_pt3[2])###R###maybe creat list by range

    #///尽量简化代码
    plat_pts = rs.AddPoints([plat_pt1,plat_pt2,plat_pt3,plat_pt4,plat_pt5,plat_pt6,plat_pt7,plat_pt8,plat_pt1])

    #creat platform polyline
    platform_pl = rs.AddPolyline(plat_pts)
    path_plat = rs.AddLine((0,0,0),(0,2*stairsLength+distance,0)) ####2*stairsLength + distance = platformLength写之间的限制函数
    platform = rs.ExtrudeCurve(platform_pl,path_plat)
    return platform
    
plat = platform()





#///反馈
#width
width = (stepCount-1)*stepWidth+platformWidth
tol_w = init_w-width
w = (width,tol_w)

#box_length
length = stairsLength*2+distance #///这里stairsLength distance应该是被权重之后的值
tol_l = init_l-length
l = (length,tol_l)

#height
height = stepCount*2*stepHeight
tol_h = init_h-height
h = (height,tol_h)


objs.append(stairs1_step)
objs.append(stairs2_step)
objs.append(plat)

def moveRotate():
    rs.MoveObject(objs,trans)
    rs.RotateObjects(objs,trans,angle*360,(0,0,1))
    #return objs
    
moveRotate() #///没用用返回值？？？


"""
#///160813
写楼梯种类变化前的代码，先整理简化之前双跑楼梯的代码，考虑点的添加方式，优化数据结构和算法
    调换好length width的顺序
把自己理解的和规范都写进代码里
明确另外的几种情况:直行单跑楼梯，平行转梯，（旋转楼梯），折行双跑楼梯，折行旋转梯，折行三跑楼梯
"""