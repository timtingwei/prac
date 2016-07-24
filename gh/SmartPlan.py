import rhinoscriptsyntax as rs
from Rhino.Geometry import Point3d as Point3d

#ERROR2:wall应该要有默认参数 door_length=1000 wall_thickness=240，整理好后打包 class

rec = rs.AddRectangle(plane,width,depth)


t = door_location
t_len = door_length
#t_len = (door_length*4)/(rs.CurveLength(rec))
t_thick = (4.0*wall_thickness)/(rs.CurveLength(rec)) #墙厚在curve_rec上的t

print ((4.0*depth)/(rs.CurveLength(rec))) #1.12503281127
#ERROR1:在wall的墙角处对数据进行修正，主要改变t_pt1的值，t_pt2由t_pt1得到
#t_thickness,pt_dist怎么求
#t_pt2 = t_pt1 + pt_dist

#door的控制方法：尽量减少输入的参数，在函数内部对数据进行控制
#(a) length一定，到边界处时候，门就要转到另外一边
#(b) door占据边的比例，占剩余部分的比例
    #(b1) door占剩余边的比例(length mapping...)
t_pt1 = rs.CurveDomain(rec)[1]*t
print ("t_thick:",t_thick)
#ReviseERROR1:pt1在墙角的时候，修正到墙面上
for i in range(4):
    if i-t_thick<t_pt1<i+t_thick:
        t_pt1 = round(t_pt1)+t_thick
try:
    if 4-t_thick<t_pt1:
        print ("revise t_pt1")
        print (4-t_thick)
        t_pt1 = 4-t_thick-0.1
except:
    print ("t_pt1 is normal")


#创建门的第二点，point在curve的不同区间要有变化，point不能超出rec
if t_len<=0:
    t_pt2 = (t_pt1-int(t_pt1)-t_thick)*t_len + t_pt1
else :
    t_pt2 = (int(t_pt1)+1-t_pt1-t_thick)*t_len + t_pt1
#ERROR3:t_pt2的算法有错误
print ('int(t_pt1)+1:',round(t_pt1))
print ('t_pt1:',t_pt1)
print ('t_pt2:',t_pt2)


door_pt1 = rs.EvaluateCurve(rec,t_pt1)
door_pt2 = rs.EvaluateCurve(rec,t_pt2)
#bug :Error door_length 不变，door_location变，会有bug 


#创建polyline，并offset
pts = []
pts.append(t_pt1)
pts.append(t_pt2)

rec_lines = rs.ExplodeCurves(rec)
for line in rec_lines:
    rec_pt = rs.CurveDomain(line)[0]
    pts.append(rec_pt)
pts = sorted(pts)
print (pts)
new_pts_t = []
#判断门在哪一边（可以单独做一个function），对确定polyline进行排序。

def door_judge(t):
    #先做的是4边的PL
    if 0<=t_pt1<1:
        return 1
    elif 1<=t_pt1<2:
        return 2
    elif 2<=t_pt1<3:
        return 3
    else:
        return 4
#这里能否进行split或者其他对list的操作pocket.P142
edge = door_judge(t)

for pt in pts[edge+1:]:
    new_pts_t.append(pt)
for pt in pts[:edge+1]:
    new_pts_t.append(pt)
    
print (new_pts_t)

#获得ptsList,polyline1
ptsList = []
for t in new_pts_t:
    pt_list = rs.EvaluateCurve(rec,t)
    ptsList.append(pt_list)
    

wall = []
wall_polyline1 = rs.AddPolyline(ptsList)
wall_polyline2 = rs.OffsetCurve(wall_polyline1,[0,0,0],wall_thickness)
wall_polyline2 = wall_polyline2[0]
link_line1 = rs.AddLine(rs.CurveStartPoint(wall_polyline1),rs.CurveStartPoint(wall_polyline2))
link_line2 = rs.AddLine(rs.CurveEndPoint(wall_polyline1),rs.CurveEndPoint(wall_polyline2))
wall.append(wall_polyline1)
wall.append(wall_polyline2)
wall.append(link_line1)
wall.append(link_line2)


