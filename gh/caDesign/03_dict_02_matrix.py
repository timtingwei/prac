#coding=utf-8
import rhinoscriptsyntax  as rs 
#--- start双循环控制矩阵移动点
#选取基础点
basicPt = rs.GetPoint("pick one point.")
#双循环创建矩阵向量
xformColumn = []
for i in range(5):
    
    sizeY = 12
    xformY = rs.XformTranslation((0,sizeY,0))
    sizeY += 12
    xformColumn.append(xformY)
    xformLine = []
    for j in range(5):

        sizeX = 12
        xformX = rs.XformTranslation((sizeX,0,0))
        sizeX+= 12
        xformLine.append(xformX)
        xformLine.append(xformX)

print (xformColumn)
print (xformLine)