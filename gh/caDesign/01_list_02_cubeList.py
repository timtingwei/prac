import rhinoscriptsyntax as rs

plane = rs.WorldXYPlane()
mplane = rs.MovePlane(plane,[60,60,5.0])
rectangle = rs.AddRectangle(mplane,40,40)
dpointsCoordinate = rs.DivideCurve(rectangle,10)
print (type(dpointsCoordinate))
dpoints = rs.AddPoints(dpointsCoordinate)
for i in range(len(dpoints)):
    rs.AddText(str(i),dpoints[i],4)
print (dpoints)

sphere = rs.AddSphere(dpoints[3],3)
cube = rs.AddBox(rs.BoundingBox(sphere))

selecteddpoints = dpoints[3:7]
for i in range(len(selecteddpoints)):
    sphere = rs.AddSphere(selecteddpoints[i],3)
    cube = rs.AddBox(rs.BoundingBox(sphere))
    rs.DeleteObject(sphere) #delete object in RhinoScript is different for del in python
    xform = rs.XformTranslation([i,i*5,i*5])
    trancube = rs.TransformObject(cube,xform)
    