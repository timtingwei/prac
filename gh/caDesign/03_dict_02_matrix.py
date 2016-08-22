#coding=utf-8

import rhinoscriptsyntax  as rs 
#--- start 双循环创建矩阵向量
#选取基础点
basicPt = rs.GetPoint("pick one point.")
pts = []
size_x = 0
for i in range(4):#四行矩阵
    xform = rs.XformTranslation((size_x,0,0))
    pt_line = rs.PointTransform(basicPt,xform)
    size_x+=12
    size_y = 0
    column_temp = []
    for j in range(6):#六列矩阵
        xform_c = rs.XformTranslation((0,size_y,0))
        pt_c =rs.PointTransform(pt_line,xform_c)
        pt_c = rs.AddPoint(pt_c)
        column_temp.append(pt_c)
        size_y +=12
    pts.append(column_temp)
print (type(pts[0]))
#--- end 双循环创建矩阵向量
#--- start Flip组织数据结构
new_pts = []
for p in range(len(pts[0])):
    temp = []
    for q in range(len(pts)):
        new_pt = pts[q][p]
        temp.append(new_pt)
    new_pts.append(temp)
#--- end Flip组织数据结构
#--- start 选取列表点建立矩形
basicPlane = rs.WorldXYPlane() #创建基础平面
recs = [] #收集矩形的空列表
for i in range(len(new_pts[1])):
    xform_p = rs.XformTranslation(new_pts[1][i])
    mplane = rs.PlaneTransform(basicPlane,xform_p)
    #rec_plane = rs.PlaneFromPoints
    rec = rs.AddRectangle(mplane,5,5)
    recs.append(rec)
#--- end 选取列表点建立矩形
"""
#///源码
import rhinoscriptsyntax as rs
firstpoint = rs.GetPoint("Selet one point") #在Rhinoceros空间中拾取点
rangel = 4 #定义X方向上复制点的数量
multiplev = 12 #定义点间距的倍数
mpoints = [] #定义用于追加X方向上第一排点的空列表
for i in range(rangel):#循环X方向上复制点数量的参数
    matrixl = rs.XformTranslation((i*multiplev,0,0)) #建立用于变化的矩阵，Y、Z方向为0
    mpointl = rs.PointTransform(firstpoint,matrixl)
    mpoints.append(mpointl)
    rs.AddPoint(mpointl) #在Rhinocereos空间中增加每次移动的点 ///显示和程序中的列表分开来写
rangeh = 4 #y方向复制的次数
dpoints = {} #定义空的字典，放置所有移动的点，每一横排的点放置于一个单独列表中，作为值
mpointh = []
deletep = []#放置每一次内部循环，即横排上的点
for i in range(rangeh):#循环y方向上复制点的次数
    matrixh = rs.XformTranslation((0,i*multiplev,0))
    for m in range(len(mpoints)):
        pointh = rs.PointTransform(mpoints[m],matrixh)
        rs.AddPoint(pointh)
        mpointh.append(pointh)
        deletep.append(pointh) #将点放置于仅用于每次内部循环的空列表中
    dpoints[i]=deletep
    deletp = []
print (dpoints) #用print()检查字典的值是否正确 ///放入字典比较直观
print (len(dpoints))
hifirst = dpoints[1] #使用方法d.get(),获取指定键的值
print (len(hifirst)) #使用print()检查
plane = rs.WorldXYPlane() #定义参考平面，用于建立矩形时的参数
h = 5 #定义矩形的高
w = 5 #宽
for i in range(len(hifirst)):
    mplane = rs.MovePlane(plane,hifirst[i])
    retangle = rs.AddRectangle(mplane,w,h)
"""

