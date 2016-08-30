
#07_class_02_rectangle_iter.py
import rhinoscriptsyntax as rs
"""
class Rectangle():
    def __init__(self):
        self.a = 20
        self.b = 20
    def next(self): 
        self.a +=10
        self.b +=5
        return self.a,self.b
    
    def __iter__(self):
        return self
    def addrec(self):
        rec = rs.AddRectangle(rs.WorldXYPlane(),self.a,self.b)
        return rec

r = Rectangle()
recLst = []
for i in range(10):
    recLst.append(r.addrec())
    r.next()
"""

class Rectangle():
    def __init__(self):
        basicp = rs.GetPoint('Pick a point in Rhino!')
        self.width = 20
        self.height = 20
        self.plane = rs.WorldXYPlane()
        self.mplane = rs.MovePlane(self.plane,basicp)
    def next(self):
        self.width += 10
        self.height += 5
        rec = rs.AddRectangle(self.mplane,self.width,self.height)
        return self.width,self.height,rec
    def setsize(self,size):
        self.width,self.height = size
    
    def getsize(self):
        return self.width,self.height
    def __iter__(self):
        return self

r = Rectangle()
#r.next() 
sizelst = []
for i in range(20):
    r.next()
    sizelst.append((r.getsize()))

print (sizelst)
#[(30, 25), (40, 30), (50, 35), (60, 40), (70, 45), (80, 50), (90, 55), (100, 60), (110, 65), (120, 70), (130, 75), (140, 80), (150, 85), (160, 90), (170, 95), (180, 100), (190, 105), (200, 110), (210, 115), (220, 120)]
for i in range(10):
    r.next()
for n in range(5): 
    r.next()
    sizelst.append(r.getsize())
