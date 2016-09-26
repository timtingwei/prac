

class MyLine(object):
    """define line with first point and vector"""
    def __init__(self,firstPt,vector):
        """
        
        """
        self.firstPt_x,self.firstPt_y,self.firstPt_z = firstPt[0],firstPt[1],firstPt[2]
        self.vector = vector #MODO:vector is list  

    def setLineParas(self):
        """set line k and b """
        k = self.vector[1] / self.vector[0]

