import rhinoscriptsyntax as rs

test = []
test.append(thePoint)
lines = []

def Lines(point,iterations,scale):
    newline = []
    if iterations == 0:return
    else:
        xpos = ypos = scale *30
        for i in point:
            new_point = (xpos,ypos,0.0)
            new_point2 = (-xpos,ypos,0.0)
            vector = rs.VectorAdd(i,new_point)
            vector2 = rs.VectorAdd(i,new_point2)
            line1 = rs.AddLine(i,vector)
            line2 = rs.AddLine(i,vector2)
            lines.append(line1)
            lines.append(line2)
            newline.append(vector)
            newline.append(vector2)
        return Lines(newline,iterations-1,scale*0.5)
        
Lines(test,iterations,scale)
a = lines