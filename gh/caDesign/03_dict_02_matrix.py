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


