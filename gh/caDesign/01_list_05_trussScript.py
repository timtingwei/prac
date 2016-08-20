#coding=utf-8
import rhinoscriptsyntax  as rs 
#--- start 建立基本结构线   
basicpoint = rs.GetPoint('please pick a point') #pick one point with start
matrix = rs.XformTranslation((37,0,0))
mbpoint = rs.PointTransform(basicpoint,matrix)
basicline = rs.AddLine(basicpoint,mbpoint) #create a basicline
#向两侧偏移曲线
offsetDistance = 5.2 #偏移的距离是5.2
offsetLineA = rs.OffsetCurve(basicline,[0,0,0],offsetDistance,[0,0,1]) #///[0,0,1]代表法线的向量
offsetLineB = rs.OffsetCurve(basicline,[0,0,0],-offsetDistance,[0,0,1])
#延长中间曲线
extendValue = 2.8 #延长的距离为2.8 ///命名的时候可以用value
extendLine = rs.ExtendCurveLength(basicline,0,2,extendValue)
#拾取曲线的首末端点和中间点
startPoint = rs.CurveStartPoint(extendLine)
midPoint = rs.CurveMidPoint(extendLine)
endPoint = rs.CurveEndPoint(extendLine)
#移动首末端点
heightA = 5 #两侧端点移动的距离
heightB = 7 #中间点移动的距离
matrixStartEndd = rs.XformTranslation((0,0,heightA))
matrixMidd = rs.XformTranslation((0,0,heightB))
mStartPoint = rs.PointTransform(startPoint,matrixStartEndd)
mMidPoint = rs.PointTransform(midPoint,matrixMidd)
mEndPoint = rs.PointTransform(endPoint,matrixStartEndd)
#建立顶部曲线
cpoints = [] #收集曲线点的空列表
cpoints.extend([mStartPoint,mMidPoint,mEndPoint])
centerCurve = rs.AddCurve(cpoints,3)
rs.DeleteObject(basicline) #删除基本结构线
#---end 建立基本结构线  #///把代码块用这种方式区分开来

#--- start 等分点组织数据
divideCount = 14
lineAdividepoints = rs.DivideCurve(offsetLineA,divideCount)
lineBdividepoints = rs.DivideCurve(offsetLineB,divideCount)
centerCurvedividepoints = rs.DivideCurve(centerCurve,divideCount)
#添加等分点
rs.AddPoints(lineAdividepoints)
rs.AddPoints(lineBdividepoints)
rs.AddPoints(centerCurvedividepoints)
#创建两种保留点的模式
patternA = list(range(0,len(lineAdividepoints),2))
patternB = list(range(1,len(lineAdividepoints)+1,2))
print (patternA)
print (patternB)
#创建收集点空的列表
lineAps = []
lineBps = []
lineCps = []
for i in patternA:
    lineAps.append(lineAdividepoints[i])
    lineBps.append(lineBdividepoints[i])
    lineCps.append(centerCurvedividepoints[i])
lineCpscopy = lineCps[:] #复制第三结构线保留等分点列表
for i in range(len(patternB)):
    lineCps.insert(patternB[i],lineAps[i])
    lineCpscopy.insert(patternB[i],lineBps[i])
pla = rs.AddPolyline(lineCps) #按模式移除点后组织数据连为折线
plb = rs.AddPolyline(lineCpscopy)
#--- end 等分点组织数据