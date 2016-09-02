import rhinoscriptsyntax as rs
import random as rand
import math


objs = []
step_size = []
for t in xrange(180,360,3):
    for r in xrange(120,210,3):
        if (550<=t+2*r<=650) and (r/t <=(7/11)):
            step_size.append((t,r))
            #print ("踏面:%s,阶高:%s"%(t,r))
#print (step_size)

countList = []
for count in xrange(0,11):
    for i in xrange(len(step_size)):
        if (abs((count-1)*step_size[i][0]+platformWidth-box_length)<=tolerance) and (abs((count*2*step_size[i][1])-box_height)<=tolerance ):
            countList.append((count,step_size[i][0],step_size[i][1]))
#seed = rand.randint(0,len(countList)) 怎么做到随机
init_l = box_length
init_w = box_width
init_h = box_height

stepCount = countList[0][0]
stepWidth = countList[0][1]
stepHeight = countList[0][2]
box_length = (stepCount-1)*stepWidth + platformWidth
box_width = (stairsWidth*2+distance) 
distance = box_width-stairsWidth*2
box_height = stepCount*2*stepHeight
print (stepCount)



def Count():
    """
    weight step count
    box_length = (stepCount-1)*stepWidth + platformWidth
    box_width = (stairsWidth*2+distance) = platformLength
    box_height = stepCount*2*stepHeight
    """
    """
    #改变boxSize的任一属性，其他两项属性不变。调整踏步深和踢面高（继续写stepSize）
    count = int((box_length - platformWidth)/stepWidth + 1)
    rock = 200
    for c in xrange(0,20,1):
        for w in xrange(200,350,1):
            for h in xrange(100,350,1):
                if (box_length-rock <= (c-1)*w+platformWidth <= box_length+rock )\
                and (box_width-rock <= 2*w*distance<=box_width+rock)\
                and (box_height-rock <= 2*c*h < box_height+rock):
                    print (c,w,h)
                    print ("##"*5)
    """
    count = int((box_length - platformWidth)/stepWidth + 1)
    #stepWidth = (box_width-distance)/2
    #stepHeight = box_height/(2*stepCount)
    
    return count
def AddStairsPts(x_direction=False):
    """
    Parameters:
        x_direction = False --> down True -->up
    return:
        stair_step pts
    """
    #first save coordinate
    pts_x = []
    pts_z=  []
    platPt_xz = []
    try:
        #先对楼梯的走向进行一个判断，下面生成梯段的时候调用同一函数，但输入的参数不同
        if x_direction == True:
            dist = distance
            plat_xyz = ((stepCount-1)*stepWidth,dist,(stepCount*stepHeight))
            k = -1
        else:
            plat_xyz = (0,0,0)
            k = 1
            dist = 0 #确保第一个梯段不会移动
        for j in xrange(stepCount):
            pt_x1 = pt_x2 = plat_xyz[0]+k*j*stepWidth
        
            pts_x.append(pt_x1)
            pts_x.append(pt_x2)
        
            if j==0:
                pt_z1 = plat_xyz[2]-stairsThickness
            else:
                pt_z1 = plat_xyz[2]+j*stepHeight
            if j == stepCount-1:
                pt_z2 = pt_z1-stairsThickness ####R### thickness must thr circular func
            else:
                pt_z2 = plat_xyz[2]+j*stepHeight + stepHeight
            pts_z.append(pt_z1)
            pts_z.append(pt_z2)
    
        #add points ,still need to revise to doubles! 
        pts = []
        for i in xrange(len(pts_z)):
            pt = rs.AddPoint(pts_x[i],dist,pts_z[i])
            #print (pts_x[i],0,pts_z[i])
            pts.append(pt)
        return pts
    except IOError as e:
        print ("Error:%s"%e)
    finally:
        print ("try,end....")
            
        
    """
    if x_direction == False:
        
        for i in xrange(stepCount):
            pt_x1 = pt_x2 = i*stepWidth
        
            pts_x.append(pt_x1)
            pts_x.append(pt_x2)
        
            if i==0:
                pt_z1 = -stairsThickness
            else:
                pt_z1 = i*stepHeight
            if i == stepCount-1:
                pt_z2 = pt_z1-stairsThickness ####R### thickness must thr circular func
                #save the platform first point 
                platPt_xz.append(i*stepWidth)
                platPt_xz.append(pt_z1+stepHeight)
            else:
                pt_z2 = i*stepHeight + stepHeight
            pts_z.append(pt_z1)
            pts_z.append(pt_z2)
        #add points ,still need to revise to doubles! 
        pts = []
        for i in xrange(len(pts_z)):
            pt = rs.AddPoint(pts_x[i],0,pts_z[i])
            #print (pts_x[i],0,pts_z[i])
            pts.append(pt)
        return pts
    else:
        #up stairs standard pt_xyz,  ###R###can i connect it with platform func???
        plat_xyz = ((stepCount-1)*stepWidth,distance,(stepCount*stepHeight)) 
        for j in xrange(stepCount):
            pt_x1 = pt_x2 = plat_xyz[0]-j*stepWidth
        
            pts_x.append(pt_x1)
            pts_x.append(pt_x2)
        
            if j==0:
                pt_z1 = plat_xyz[2]-stairsThickness
            else:
                pt_z1 = plat_xyz[2]+j*stepHeight
            if j == stepCount-1:
                pt_z2 = pt_z1-stairsThickness ####R### thickness must thr circular func
            else:
                pt_z2 = plat_xyz[2]+j*stepHeight + stepHeight
            pts_z.append(pt_z1)
            pts_z.append(pt_z2)
    
        #add points ,still need to revise to doubles! 
        pts = []
        for i in xrange(len(pts_z)):
            pt = rs.AddPoint(pts_x[i],distance,pts_z[i])
            #print (pts_x[i],0,pts_z[i])
            pts.append(pt)
        return pts
    """
#stepCount = Count()
a = AddStairsPts(False)
b = AddStairsPts(True)

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

def boundaryExtrude(polyline,path): ###R###
    surf = rs.AddPlanarSrf(polyline)
    #path = rs.AddCurve([(0,stairsWidth,0),(0,0,0)]) 
    #polyline_brep = rs.coercebrep(polyline,True)
    #polyline = rs.coercecurve(polyline,-1)
    subs = rs.ExtrudeCurve(polyline,path) #"""""""""""""""""""""""""" why rs.ExtrudeSurface can't be used
    
    return subs
    
#bou = boundaryExtrude(line)

def ExtrudeStairs(polyline,bool):
    #这个函数写成list的形式，有点面向过程，但先试试看,
    #不能同时带入两个可变参
    #curve_pt = [(0,stairsWidth,0),(0,0,0)]
    #print (curve_pt.sort(key = tuple.lower,reverse=True))
    if bool == True:
        path_stairs = rs.AddCurve([(0,0,0),(0,stairsWidth,0)])
    else:
        path_stairs = rs.AddCurve([(0,stairsWidth,0),(0,0,0)])
    #path_stairs = rs.AddCurve([(0,stairsWidth,0),(0,0,0)]) 
    stairs = boundaryExtrude(polyline,path_stairs)
    return stairs

#stairsStep = ExtrudeStairs(lines,False,True)
stairs1_step = ExtrudeStairs(lines[0],False)
stairs2_step = ExtrudeStairs(lines[1],True)
objs.append(stairs1_step)
objs.append(stairs2_step)

def platform():
    #add platform points orderly
    
    pts_list = []
    plat_pt1 = ((stepCount-1)*stepWidth,-stairsWidth,(stepCount*stepHeight))
    plat_pt2 = (plat_pt1[0]+platformWidth,-stairsWidth,plat_pt1[2])
    plat_pt3 = (plat_pt2[0],-stairsWidth,plat_pt2[2]-(beamHeight+platformThickness))
    plat_pt4 = (plat_pt3[0]-beamWidth,-stairsWidth,plat_pt3[2])
    plat_pt5 = (plat_pt4[0],-stairsWidth,plat_pt4[2]+beamHeight)
    plat_pt6 = (plat_pt5[0]-platformWidth+2*beamWidth,-stairsWidth,plat_pt5[2])
    plat_pt7 = (plat_pt6[0],-stairsWidth,plat_pt3[2])
    plat_pt8 = (plat_pt1[0],-stairsWidth,plat_pt3[2])###R###maybe creat list by range
    """
    pts_list.append(plat_pt1)
    pts_list.append(plat_pt2)
    pts_list.append()
    print (plat_xz[0])
    print (plat_xz)
    """
    pts_list.append(plat_pt1)
    pts_list.append(plat_pt2)
    pts_list.append(plat_pt3)
    pts_list.append(plat_pt4)
    pts_list.append(plat_pt5)
    pts_list.append(plat_pt6)
    pts_list.append(plat_pt7)
    pts_list.append(plat_pt8)
    pts_list.append(plat_pt1)
    
    plat_pts = []
    #print (pts_list)
    for i in pts_list:
        pt = rs.AddPoint(i)
        plat_pts.append(pt)
    
    #creat platform polyline
    platform_pl = rs.AddPolyline(plat_pts)
    path_plat = rs.AddLine((0,0,0),(0,2*stairsWidth+distance,0)) ####2*stairsWidth + distance = platformLength写之间的限制函数
    platform = boundaryExtrude(platform_pl,path_plat)
    return platform
    
plat = platform()
objs.append(plat)


def moveRotate():
    rs.MoveObject(objs,trans)
    rs.RotateObjects(objs,trans,angle*360,(0,0,1))
    return objs
    
moveRotate()

#反馈
length = (stepCount-1)*stepWidth+platformWidth
tol_l = init_l-length
print (length)
l = (length,tol_l)
box_length
width = stairsWidth*2+distance
tol_w = init_w-width
w = (width,tol_w)

height = stepCount*2*stepHeight
tol_h = init_h-height
h = (height,tol_h)