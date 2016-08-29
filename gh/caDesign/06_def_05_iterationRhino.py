#coding=utf-8
#06_def_05_iterationRhino.py

import rhinoscriptsyntax as rs
import copy 
startpoint = rs.GetPoint("please pick a point in Rhino:",1)
copypoint = copy.deepcopy(startpoint)
plst = []
plst.append(startpoint)
plane = rs.WorldXYPlane()

def condition(direction='z',swing='x',multi=5,swingangle=0,rotateangle=20,pd='x'):
    slst = {'x':1,'y':2,'z':3} #建立字典用于选择参考平面
    directionvector = slst.get(direction) #海龟爬动方向
    swingdirection = slst.get(swing) #定义摆动方向
    pdplaneorient = slst.get(pd) #定义参考平面X轴方向
    multi = multi #定义单位长度的倍数
    swingangle = swingangle
    rotateangle = rotateangle
    print (directionvector)
    return directionvector,swingdirection,multi,swingangle,rotateangle,plst,pdplaneorient

def singlestep(startpoint,directionvector,swingdirection,multi,swingangle,rotateangle,plst,plane,pdplaneorient):
    """海龟爬行循环函数
    """
    sunitvector = plane[directionvector] #从参考平面提取基础向量
    scalesuv = rs.VectorScale(sunitvector,multi) #调整基础向量大小
    swingaxis = plane[swingdirection] #选择基础向量摆动的方向
    rotatessuv = rs.VectorRotate(scalesuv,swingangle,swingaxis) #摆动基础向量
    crssuv = rs.VectorRotate(rotatessuv,rotateangle,sunitvector)
    smatrix = rs.XformTranslation(crssuv)
    secondpoint = rs.PointTransform(startpoint,smatrix) #根据矩阵移动初始点
    rs.AddPoint(secondpoint)
    plst.append(secondpoint)
    oplane = rs.PlaneFromNormal(secondpoint,crssuv,plane[pdplaneorient])
    plane = oplane
    startpoint = oplane[0]
    
    return plane,plst,startpoint
    
for n in range(360):
    directionvector,swingdirection,multi,swingangle,rotateangle,plst,pdplaneorient = condition(multi=100,swingangle=n)
    plane,plst,startpoint = singlestep(startpoint,directionvector,swingdirection,multi,swingangle,rotateangle,plst,plane,pdplaneorient)
    directionvector,swingdirection,multi,swingangle,rotateangle,plst,pdplaneorient = condition(multi=20,swingangle=-60)
    plane,plst,startpoint = singlestep(startpoint,directionvector,swingdirection,multi,swingangle,rotateangle,plst,plane,pdplaneorient)
    directionvector,swingdirection,multi,swingangle,rotateangle,plst,pdplaneorient = condition(multi=50,swingangle=90)
    plane,plst,startpoint = singlestep(startpoint,directionvector,swingdirection,multi,swingangle,rotateangle,plst,plane,pdplaneorient)
    polyline = rs.AddPolyline(plst)
    plst = [] #清空列表
    plst.append(startpoint)
    plane = rs.WorldXYPlane()