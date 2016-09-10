#dormitory_arrangement.py

#///actual space--> length:500  width:550 height:450

#type length width height price
#F184 184    272   102    17.00
#F224 224    307   124    32.60
#F257 257    369   146    43.60
#F316 316    410   172    51.60
#F330 330    470   215    68.80
#F450 450    450   200    74.60

#make full use of space as far as possible,calculate plan and compare price
class Box(object):
    def __init__(self,length,width,height,price):
        self.length = length
        self.width = width
        self.height = height
        self.price = price
    
    def getSpace(self):
        '''get box's space and unit is mm3' '''
        space = self.length * self.width * self.height
        return space
    
    def getUtilizationRatio(self):
        '''space(mm3)/price(yuan) get per space's price ' '''
        ratio = self.getSpace()/self.price
        return '%.2f' % ratio


actualSpace = Box(500,550,450,0)
boxLst = []
box_F184 = Box(184,272,102,17.00)
boxLst.append(box_F184)
box_F224 = Box(224,307,124,32.60)
boxLst.append(box_F224)
box_F257 = Box(257,369,146,43.60)
boxLst.append(box_F257)
box_F316 = Box(316,410,172,51.60)
boxLst.append(box_F316)
box_F330 = Box(330,470,215,68.80)
boxLst.append(box_F330)
box_F450 = Box(450,450,200,74.60)
boxLst.append(box_F450)
print (boxLst)

utilizationLst = []
price = 0
for i in range(len(boxLst)):
    ratio = boxLst[i].getUtilizationRatio()
    utilizationLst.append(ratio)

print (utilizationLst)

def arrange(boxLst,actualSpace):
    '''test how to arrange '''
    boxArrangeResultLst = []
    for i in range(len(boxLst)):
        for j in range(len(boxLst)):
            for k in range(len(boxLst)):
                boxArrangeResult = []
                firstLayer = []
                #先在length方向上摆，摆满位置 
                #totalLength = boxLst[i].length + boxLst[j].length + boxLst[k].length
                totalLength = boxLst[i].length
                firstLayer.append(str(boxLst[i].length))
                if actualSpace.length - totalLength > 0:
                    #放完一个box后，length方向上仍旧有空间
                    totalLength += boxLst[j].length
                    firstLayer.append(str(boxLst[j].length))
                    if actualSpace.length - totalLength > 0:
                        #放完两个box后，length方向上仍旧有空间
                        totalLength += boxLst[k].length
                        firstLayer.append(str(boxLst[k].length))
                boxArrangeResult.append(firstLayer)
                for o in range(len(boxLst)):
                    for p in range(len(boxLst)):
                        for q in range(len(boxLst)):
                            secondLayer = []
                            #先在height方向上摆，摆满位置 
                            #totalheight = boxLst[i].height + boxLst[j].height + boxLst[k].height
                            totalHeight = boxLst[o].height
                            secondLayer.append(str(boxLst[o].length))
                            if actualSpace.height - totalHeight > 0:
                                #放完一个box后，Height方向上仍旧有空间
                                totalHeight += boxLst[p].height
                                secondLayer.append(str(boxLst[p].length))
                                if actualSpace.height - totalHeight > 0:
                                    #放完两个box后，height方向上仍旧有空间
                                    totalHeight += boxLst[q].height
                                    secondLayer.append(str(boxLst[q].length))
                            boxArrangeResult.append(secondLayer)
                boxArrangeResultLst.append(boxArrangeResult)
    return boxArrangeResultLst

#print (arrange(boxLst,actualSpace))

#box_F224 * 2 + box_F450
def myPlan(box_F224,box_F450,actualSpace):
    """
    Parameters:
        my plan box
    Returns:
        price:
        rest space:
    """
    boxLst = [box_F224,box_F224,box_F450]
    restSpace = actualSpace.getSpace()
    price = 0
    for i in range(len(boxLst)):
        
        restSpace -= boxLst[i].getSpace()
        price += boxLst[i].price
    restSpaceRatio = restSpace / actualSpace.getSpace()
    height = box_F224.height + box_F450.height
    heightRatio = height / actualSpace.height
    restHeight = actualSpace.height - height
    width = box_F450.width
    witdthRatio = width / actualSpace.width
    return price,restSpace,restSpaceRatio,heightRatio,witdthRatio,restHeight

print (myPlan(box_F224,box_F450,actualSpace))

#mySecond plan box_F184 * 2 + box_F224 * 2 + box_F450
def mySecondPlan(box_F184,box_F224,box_F450,actualSpace):
    """
    Parameters:
        my plan box
    Returns:
        price:
        rest space:
    """
    boxLst = [box_F184,box_F184,box_F224,box_F224,box_F450]
    restSpace = actualSpace.getSpace()
    price = 0
    for i in range(len(boxLst)):
        
        restSpace -= boxLst[i].getSpace()
        price += boxLst[i].price
    restSpaceRatio = restSpace / actualSpace.getSpace()
    height = box_F184.height + box_F224.height + box_F450.height
    heightRatio = height / actualSpace.height
    restHeight = actualSpace.height - height
    width = box_F450.width
    witdthRatio = width / actualSpace.width
    #return price,restSpace,restSpaceRatio,heightRatio,witdthRatio,restHeight
    return price,restSpace,restSpaceRatio,restHeight
print (mySecondPlan(box_F184,box_F224,box_F450,actualSpace))

def myThirdPlan(box_F450,actualSpace):
    boxLst = [box_F450,box_F450]
    restSpace = actualSpace.getSpace()
    price = 0
    for i in range(len(boxLst)):
        
        restSpace -= boxLst[i].getSpace()
        price += boxLst[i].price
    restSpaceRatio = restSpace / actualSpace.getSpace()
    height = box_F450.height * 2
    restHeight = actualSpace.height - height
    return price,restSpace,restSpaceRatio,restHeight

print (myThirdPlan(box_F450,actualSpace))
\





"""
class Box_F184(Box):
    pass

class Box_F224(Box):
    pass

class Box_F257(Box):
    pass

class Box_F316(Box):
    pass

class Box_F330(Box):
    pass

class Box_F450(Box):
    pass
"""



        
