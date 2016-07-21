#fractal_tree.py

import rhinoscriptsyntax as rs
outputlines = []
outputlines.append(line)
#上面两句是初始化参数
def Koch(Lins_List,t,gen):
    #进行判断一下，迭代为一次的时候直接返回
    if gen == 1:
        return Lins_List
    else:
        arrlines = []
        #定义一个列表来装生成的参数
        for i in Lins_List:
            #遍历每一条曲线
            Pt_start =rs.CurveStartPoint(i)
            Pt_mid = rs.CurveMidPoint(i)
            Pt_end = rs.CurveEndPoint(i)
            new_t1 = rs.CurveDomain(i)[1] * t
            Pt2 = rs.EvaluateCurve(i,new_t1)
            new_t2 = rs.CurveDomain(i)[1] -new_t1
            Pt3 = rs.EvaluateCurve(i,new_t2)
            #得到起点，终点，中，1/4 3/4的点
            
            vec_tan = rs.VectorCreate(Pt2,Pt_mid)
            #创建旋转向量
            Rovec = rs.VectorCreate((0,0,0),(0,0,1))
            #创建旋转轴
            new_vec = rs.VectorRotate(vec_tan,90,Rovec)
            #旋转得到向量
            new_mid = rs.PointAdd(Pt_mid,new_vec)
            #PointAdd是什么意思
            arrlines.append(rs.AddLine(Pt_start,Pt2))
            arrlines.append(rs.AddLine(Pt2,new_mid))
            arrlines.append(rs.AddLine(new_mid,Pt3))
            arrlines.append(rs.AddLine(Pt3,Pt_end))
        return Koch(arrlines,t,gen -1)
        #递归
        
a = Koch(outputlines,ratio,iteration)
        
             
            
            
            
            