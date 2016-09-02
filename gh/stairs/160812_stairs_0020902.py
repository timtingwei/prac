import rhinoscriptsyntax as rs
import random as rand
import math

def getStepsize(domain_t,domain_r,domain_tadd2r,commendSlope,basicSlope,specialType=False):
    """get  step size from norm of stair,t represent tread,r represent step height
    Parameters:
        domain_t:tuple,(min_t,max_t)
        domain_r:tuple,(min_r,max_r)
        domain_r:tuple,(min_tadd2r,max_tadd2r)
        commendSlope:float,r/t
        basicSlope:r/t
    Returns:
        sizeLst:list,contains steps weight and height in tuple                                    #///maybe should contains stairs length
    """
    if specialType: #when norm is loose , take basic slope
        slope = basicSlope 
    else:
        slope = commendSlope
    sizeLst = []
    rangestep = 3
    epsilion = 0.01
    for t in xrange(domain_t[0],domain_t[1],rangestep):
        for r in xrange(domain_r[0],domain_r[1],rangestep):
            if (domain_tadd2r[0]<= t+2*r <= domain_tadd2r[1]) and ((r/t) <= slope):
                sizeLst.append((t,r))
    if sizeLst == []:
        return None
        print ('there is no appropriate size')
    else:
        #size = sizeLst[0]
        #print ("踏面:%s,阶高:%s"%(sizeLst[0],size[1]))
        return sizeLst

def settype(housingType=0):
    """select achitecture type:
    Parameters:
        housingType:int,0:tinyhouse
                        1:public housing internal
                        2:public housing external
    Returns:list,domain_t,tuple
                 domain_r,tuple
                 domain_tadd2r,tuple,
                 commendSlope,float
                 basicSlope,float
    """
    typeRange = [0,1,2]
    assert housingType in typeRange ,'Please set type between [0,2]'
    if housingType == 0:
        domain_t, domain_r, domain_tadd2r, commendSlope, basicSlope= (180,360),(120,210),(550,650),7/11,6/7
    elif housingType ==1:
        domain_t, domain_r, domain_tadd2r, commendSlope, basicSlope= (300,1000),(0,160),(550,650),7/11,7/11 #tread more than 300 is all right 
    else:
        domain_t, domain_r, domain_tadd2r, commendSlope, basicSlope= (300,1000),(0,160),(550,650),7/11,7/11
    return domain_t,domain_r,domain_tadd2r,commendSlope,basicSlope

def getcount(stepsize,boxsize,platformWidth,epsilion):
    """
    Parameters:
        stepsize:tuple,contains step's weight and height
        boxsize:tuple,size of the box which surround the stairs
        platformWidth:float,width of platform 
        epsilion:float,data error epsilion
    Returns:
        countLst:list,stairs size (count,stepWidth,stepHeight)
    """
    countLst = []
    countMax = 20
    sizeLst = getStepsize( settype()[0],settype()[1],settype()[2],settype()[3],settype()[4]  ) 
    for count in range(1,countMax):
         for size in sizeLst:
             if (abs((count-1)*size[0]+ platformWidth - boxsize[1] )<= epsilion) and (abs(count*2*size[1] - boxsize[2] ) < epsilion ):
                 countLst.append((count,size[0],size[1]))
                 print ('count : %s, step_width : %s,step_height : %s'% (count,size[0],size[1]))
    assert countLst != [] ,'couldn\'t get countLst'
    return countLst

def setBoxsize(length,width,height):
    """Set box size surround the stairs                    #///need to be more stronger
    Parameters:
        length:float,box length
        width:float,box width
        height:float,box height
    Returns:
        
    """
    return length,width,height
def getBoxsize(stepCount,stepHeight,stepWidth,platformWidth,stairsLength,distance):
    """reset boxsize from other attribute
    Returns:
        boxsize:list,
                [0]box_length
                [1]box_weight
                [2]box_height
    """
    #///重新给box的三个属性赋值
    box_width = (stepCount-1)*stepWidth + platformWidth
    box_length = (stairsLength*2+distance) 
    #distance = box_length-stairsLength*2
    box_height = stepCount*2*stepHeight
    #print ("box_length:%s,box_width:%s,box_height:%s"%(box_length,box_width,box_height))
    return box_length,box_width,box_height

def weight4length(box_length,stairsLength,distance):
    """weighting value between box_length ,stairsLength and distance
    Parameters:
        box_length : float,length of box original
        stairsLength : float,length of stair step original
        distance:float,distance between two stairs original
    Returns:
        list,
            [0]box_length:float,after weighting
            [1]stairsLength:float,after weighting
            [2]distance:float,after weighting
    """
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
    box_length = stairsLength*2+distance #///reload box_length with new stairsLength and distance
    return box_length,stairsLength,distance
def compareError(original,ultimate):
    """feedback difference between original and ultimate for box_size
    Parameters:
        original:list,box_length,box_width,box_height
    Returns:
        compare:list,compare size between original and ultimate
    """
    compare = [abs(original[i]-ultimate[i]) for i in xrange(len(original))]
    return compare

def convert2thick(stairsThickness,stepCount,stepWidth,box_height):
    """convert actual thickness to pianting thickness
    Parameters:
        stairsThickness:float,true thickness
        stepCount:int,amount of stair
        stepWidth:float
        box_height:float,initial box height
    Returns:
        thick:float,paiting distance in grasshopper
    """
    slope_cos = ((stepCount-1)*stepWidth)/math.sqrt((box_height*0.5)**2+((stepCount-1)*stepWidth)**2)#///坡度的余弦值
    thick = stairsThickness/slope_cos
    return thick


def weight4width(box_width,platformWidth,stairsLength,stepCount,stepWidth):
    """weighting value between platformWidth and stairsLength
    Returns:
        plamformWidth:float
    """
    if (platformWidth-stairsLength)<0:
        platformWidth = stairsLength + 50 #platform width must larger than stairs length ,the value is 50
        return platformWidth
    else:return platformWidth



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
    for i in xrange(len(pts_z)):
        pt = rs.AddPoint(pts_x[i],dist,pts_z[i])
        #print (pts_x[i],0,pts_z[i])
        pts.append(pt)
    return pts



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


def getpath(distance,direction=True):
    """get path from basic direction and distance
    Parameters:
        distance:float,length of path
        direction:boolean,
                    [0] represent positive x-axis direction
                    [1] represent nagative x-axis direction
    Returns:
        path,Guid The identifier of the new object if successful
    """
    if direction == True:
        path = rs.AddLine([0,0,0],[0,distance,0])
    else:
        path = rs.AddLine([0,distance,0],[0,0,0])
    return path
def ExtrudeStairs(polyline,path):
    """Extrude polyline along certain path
    Parameters:
        polyline:guid
        path:guid
    Returns:
        stairs:guid,new object if successful
    """
    #print ('type poly:%s,type path:%s'%(type(polyline),type(path)))
    surface = rs.AddPlanarSrf([polyline])
    stairs = rs.ExtrudeSurface(surface,path,True)
    return stairs



def platform(stepCount,stepWidth,stepHeight,stairsLength,beamWidth,beamHeight,platformThickness):
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
    
    pts_list.extend([plat_pt1,plat_pt2,plat_pt3,plat_pt4,plat_pt5,plat_pt6,plat_pt7,plat_pt8,plat_pt1])
    plat_pts = [rs.AddPoint(n) for n in pts_list]
    
    #creat platform polyline
    platform_pl = rs.AddPolyline(plat_pts)
    platform = ExtrudeStairs(platform_pl,getpath(2*stairsLength+distance,True))
    return platform
    



def moveRotate(objs,trans):
    rs.MoveObject(objs,trans)
    rs.RotateObjects(objs,trans,angle*360,(0,0,1))
    return objs
    

try:
    #print (settype())
    #print (getStepsize(settype()[0],settype()[1],settype()[2],settype()[3],settype()[4])[0])
    stepsize = getStepsize(settype()[0],settype()[1],settype()[2],settype()[3],settype()[4])[0]
    boxsize = setBoxsize(box_length,box_width,box_height)
    epsilion = 20
    stepCountLst =  (getcount (stepsize,boxsize,platformWidth,epsilion))
    #索引stepCountLst第一个值，得到踏步的尺寸和数量
    stepCount = stepCountLst[0][0]
    stepWidth = stepCountLst[0][1]
    stepHeight = stepCountLst[0][2]
    #print ("box_length:%s,box_width:%s,box_height:%s"%(box_length,box_width,box_height))
    
    box_length = weight4length(box_length,stairsLength,distance)[0]
    stairsLenght = weight4length(box_length,stairsLength,distance)[1]
    distance = weight4length(box_length,stairsLength,distance)[2] 
    box_width = boxsize[1]
    box_height = boxsize[2]  
    thick =  convert2thick(stairsThickness,stepCount,stepWidth,box_height)
    
    original =  boxsize
    platformWidth = weight4width(box_width,platformWidth,stairsLength,stepCount,stepWidth)
    ultimate = getBoxsize(stepCount,stepHeight,stepWidth,platformWidth,stairsLength,distance)
    #compareError(original,ultimate)
    print ('original:%s,ultimate:%s'%(original,ultimate))
    print (compareError(original,ultimate))
    l,w,h = compareError(original,ultimate) #///之前的boxsize与当前的setBoxsize()比较

    #/// 创建一个收集实体的list
    objs = []
    a = AddStairsPts(False)#第一个梯段
    b = AddStairsPts(True)#第二个梯段
    lines = StairsPolyLine(a,b)
    print (lines)
    #stairsStep = ExtrudeStairs(lines,False,True)
    stairs1_step = ExtrudeStairs(lines[0],getpath(stairsLength,False))
    stairs2_step = ExtrudeStairs(lines[1],getpath(stairsLength,True))
    objs.append(stairs1_step)
    objs.append(stairs2_step)
    plat = platform(stepCount,stepWidth,stepHeight,stairsLength,beamWidth,beamHeight,platformThickness)
    objs.append(plat)
    moveRotate(objs,trans)

except IOError as e:
    raise ('error:%s'% e)

"""
#///160813
写楼梯种类变化前的代码，先整理简化之前双跑楼梯的代码，考虑点的添加方式，优化数据结构和算法
    调换好length width的顺序
把自己理解的和规范都写进代码里
明确另外的几种情况:直行单跑楼梯，平行转梯，（旋转楼梯），折行双跑楼梯，折行旋转梯，折行三跑楼梯

#///160902
把一些过程整理成了函数，分解的过程被模块化。
考虑调用是否可以再简洁，测试函数的功能是否完善
插写另外的情况
"""
