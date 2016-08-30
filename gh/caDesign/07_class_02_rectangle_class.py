import rhinoscriptsyntax as rs
class Rectangle():
    def __init__(self):
        self.baiscp = rs.WorldXYPlane()
        self.width = 20
        self.height = 20    
        
    def setsize(self,size_tuple):
        self.width = size_tuple[0]
        self.height = size_tuple[1]
    
    def getsize(self):
        return self.width,self.height
    
    def addrec(self):
        rs.AddRectangle(self.baiscp,self.width,self.height)

r = Rectangle()
r.addrec()
r.setsize((30,25))
r.addrec()
r.width,r.height = 40,45
r.addrec()
print (r.width,r.height) #///通过属性得到返回值
#(40, 45)
print (r.getsize()) #///通过方法获得返回值
#(40, 45)

