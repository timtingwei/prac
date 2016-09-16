#160913_haystack_001.py

import math
import random
import copy
import time

def flowingParameter(a_domain,b_domain,n_domain,m_domain,x_domain,y_domain,r_max_domain,r_min_domain):
    """change the parameter automaticly
    Paras:
        a,b:tuple consist of float
        n,m:tuple consist of integer
        x,y:tuple consist of integer
        r_max_domain:tuple consist of float
    """
   
    a = int(random.random()*a_domain[1])+a_domain[0]
    b = int(random.random()*b_domain[1])+b_domain[0]
    n = int(random.random()*n_domain[1])+n_domain[0]
    m = int(random.random()*m_domain[1])+m_domain[0]
    x = int(random.random()*x_domain[1])+x_domain[0]
    y = int(random.random()*y_domain[1])+y_domain[0]
    r_max = random.random()*r_max_domain[1]+r_max_domain[0]
    r_min = random.random()*r_min_domain[1]+r_min_domain[0]
    return a,b,n,m,x,y,r_max,r_min


def testSleep():
    for i in range(5):
        print (i)
        time.sleep(1)
    
#testSleep()





def getCornerPt(a,b):
    """get corner points in grid
    Paras:
        a:rectangle length,float
        b:rectangle height,float
    Returns:
        recPts_list:list,coninsit of pt list,[[x1,y1,z1]]
    """
    recPts_list = [[0,0,0],[0,b,0],[a,b,0],[a,0,0],[0,0,0]]
    return recPts_list

def setPtCoordinate(a,b,n,m):
    """get all points in gird and points at sides 
    Paras:
        a,b,n,m
    Returns:
        pts_dict:dict,key=string, 'index_x,index_y' value =list,coordinate ,all points in grid
        sidePts_dict:dict, points in side
    """
    pts_dict = {} #储存网格点的索引位置和坐标值
    sidePts_dict = {}
    for i in range (n+1): #i代表line
        for j in range (m+1): #j代表colomn
            key = '%d,%d'%(i,j)
            pts_dict[key] = [i*(a/n),j*(b/m),0] #得到每个点的{索引位置(i,j)：[x,y,z])}的索引字典
            if i == 0 or j == 0 or i == n or j == m:
                sidePts_dict[key] = pts_dict[key]

    return pts_dict,sidePts_dict

def expand2LinarOrder(n,m,sidePts_dict):
    """sorted points in dict to ordly points in list acroding to a certain direction line  
    Para:
        sidePts_dict:dict
    Returns:
        sidePts_list:list ,[['x,y',coordinate],...,[]]
    """
    sidePts_list = []
    i = 0
    for j in range(m+1):
        #i=0,j:0-->m
        key = '%d,%d'%(i,j)
        sidePts_list.append([key,sidePts_dict[key]])
    #i:1-->n,j=m
    for i in range(1,n+1):
        key = '%d,%d'%(i,j)
        sidePts_list.append([key,sidePts_dict[key]])
    #i=n,j:m-1-->0
    for j in range(1,m+1):
        key = '%d,%d'%(i,m-j)
        sidePts_list.append([key,sidePts_dict[key]])
    #i:n-1-->1,j=0 
    j = 0           #///MODO:excluded {0,0}
    for i in range(1,n):
        key = '%d,%d'%(n-i,j)
        sidePts_list.append([key,sidePts_dict[key]])
    return sidePts_list

def getDistance(sidePts_list):
    """calculate distance between side points,there is no lap
    Paras:
        sidePts_list:list,ordly side points list
    Returns:
        distance_dict:dict,distance between two points    #MODO:consider dictionary's efficiency is better length = a1*n+n(n-1)*d/2 sum
    """
    distance_dict = {}
    for i in range(len(sidePts_list)):
        for j in range(i+1,len(sidePts_list)):
            key = '%s;%s'%(sidePts_list[i][0],sidePts_list[j][0])
            dist = math.sqrt(((sidePts_list[i][1][0] - sidePts_list[j][1][0]) ** 2 + (sidePts_list[i][1][1] - sidePts_list[j][1][1]) ** 2)) #直角三角形计算两点距离
            distance_dict[key] = dist 
    return distance_dict

class Convert(object):
    '''super a class for convert type between list and dictionary'''
    def list2dict(self,myList):
        assert type(myList) == type([]),'you must convert list to dict'
        myDict={}
        for i in myList:
            myDict[i[0]] = i[1]
        return myDict
    def dict2list(self,myDict):
        assert type(myDict) == type({}),'you must convert dict to list'
        myList = []
        for key in myDict:
            myList.append([key,myDict[key]])          #MODO:列表好像多了一层,留出来多的一层可以放midpoint等类似数据
        return myList

def filterDistance(distance_dict):

    #过滤连线的规则，同一边上的线不相连，只有异边之间的点可以相连
    #网格上的索引为(a1,b1) (a2,b2) 同时满足 a1 != a2, b1 != b2 的点被留下来，其余被删去
    new_distance_dict = copy.copy(distance_dict) #MODO:///引用了同一对象，当被删除时候，无法进行循环，需要进行浅复制copy
    for key in distance_dict:              #MODO:ELSE --> RuntimeError: dictionary changed size during iteration 
        if key[0]==key[4] or key[2]==key[6]:
            del new_distance_dict[key]  
    return new_distance_dict

def byList(t):
    '''as sortedDistance sorted key '''
    return t[1]

def sortedDistance(distance_list):
    '''sorted list accroding distance '''
    sorted_distance_list = sorted(distance_list,key=byList)
    return sorted_distance_list

def choiceMinLine(sorted_distance_list,x=10,y=3):
    """choice the miniest line,count is x
    Paras:
         sorted_distance_list:list,ordly list
         x:int,count of miniest lines
         y:int,random choice in x lines
    Returns:
        minLine_List:list,random choice the miniest lines length = y
    """

    
    minDist_list = sorted_distance_list[:x] #选择出距离最短的x条线
    reMinDist_list = []
    #for i in range(y): #在x条线中，随机再选择y条                            #BUG:随机选择的时候很有可能重复
        #reMinDist_list.append(random.choice(minDist_list))
    while len(reMinDist_list)<y:
        dist_rand = random.choice(minDist_list)
        if dist_rand not in reMinDist_list:
            reMinDist_list.append(dist_rand)
    minLine_List = reMinDist_list
    return minLine_List

def choiceRadius(a,b,n,m,r_max,r_min):
    #得到相应的半径list,值域范围根据场地的大小决定,
    r_max = a/m * r_max
    r_min = a/m * r_min
    radius = random.random()*r_max + r_min
    return radius



def testRandom(): #关于随机的算法
    L = [1,2,4,5,6,7,8]
    random_list = []
    while len(random_list)<4:
        new_r = random.choice(L)
        if new_r not in random_list:
            random_list.append(new_r)
            print (new_r)
#testRandom()

def separeteConstruction(minLine_List):
    """separete construction into tag-->pt1,tag-->pt2,distance
    Paras:
        minLine_List:list
    Returns:
        pt1_list:list consist of string 
        pt2_list:list consist of string
        distance_list:list consist of float
    """
    pt1_list = []
    pt2_list = []
    distance_list = []
    for i in minLine_List:
        twoPtTags = i[0]
        pt1,pt2 = twoPtTags.split(';')
        pt1_list.append(pt1)
        pt2_list.append(pt2)
        distance_list.append(i[1])
    return pt1_list,pt2_list,distance_list
        
def getPtCoordinate(pts_Dict,ptTag):
    """get point's cooridinate in pts's dictionary
    Paras:
        pts_Dict:dict
        ptTag:string
    return:
        coordinate:list consist of float
    """
    coordinate =  pts_Dict[ptTag]
    return coordinate
    

def getMidPoint(pt1,pt2):
    midPt = [(pt1[0]+pt2[0])*0.5,(pt1[1]+pt2[1])*0.5,(pt1[2]+pt2[2])*0.5]
    return midPt



def dataWrite(recPts_list,midPts_list,radius_list):
    f = open('E:/tim/prac/py/class/haystack/data.txt','w')
    
    for i in range(len(midPts_list)):
        #format:  0:x,y,z;radius    
        f.write('%d' % i)
        f.write(':')
        f.write('%f,%f,%f'% (midPts_list[i][0],midPts_list[i][1],midPts_list[i][2]))
        f.write(';')
        f.write('%f'% radius_list[i])
        f.write('*')
    for j in range(len(recPts_list)):
        f.write(('%f,%f,%f')%(recPts_list[j][0],recPts_list[j][1],recPts_list[j][2]))
        f.write('/')
    f.close()
    print ('dataWrite process has been finished..')



def test():
    """
        a:length,b:height,n:divide_length,m:divide_height,x:min_range,y:min_count,r_max_min:radius time
    """

    a_domain,b_domain,n_domain,m_domain,x_domain,y_domain,r_max_domain,r_min_domain = (10,20),(10,15),(3,6),(3,10),(10,20),(3,5),(0.4,0.8),(0.1,0.5)
    
    for t in range(60):
        a,b,n,m,x,y,r_max,r_min = flowingParameter(a_domain,b_domain,n_domain,m_domain,x_domain,y_domain,r_max_domain,r_min_domain)
        print ('length:%s;height:%s;divide_length:%s;divide_height:%s,min_range:%s;min_count:%s,r_max:%s;r_min:%s'%(a,b,n,m,x,y,r_max,r_min))
        print ('%d :reset data' % t)
        sidePts_list = expand2LinarOrder(n,m,setPtCoordinate(a,b,n,m)[1])
        distance_dict = getDistance(sidePts_list)
        #print (distance_dict)
        new_distance_dict = filterDistance(distance_dict)  #///删除在同一边上的连线
        #print (new_distance_dict)
        convert = Convert()
        distance_list = convert.dict2list(new_distance_dict)
        #print (distance_list)
        sorted_distance_list = sortedDistance(distance_list)

        minLine_List = choiceMinLine(sorted_distance_list,x,y)

        pt1_list = separeteConstruction(minLine_List)[0]
        pt2_list = separeteConstruction(minLine_List)[1]

        #寻找计算中点，并随机半径
        recPts_list = getCornerPt(a,b)
        midPts_list = []
        radius_list = []
        sidePts_dict = setPtCoordinate(a,b,n,m)[1]
        for i in range(len(pt1_list)):
            firstPt = getPtCoordinate(sidePts_dict,pt1_list[i])
            secondPt = getPtCoordinate(sidePts_dict,pt2_list[i])
            midPt = getMidPoint(firstPt,secondPt)
            midPts_list.append(midPt)
            radius_list.append(choiceRadius(a,b,n,m,r_max,r_min))
        #print (recPts_list)
        #print (midPts_list)
        #print (radius_list)
        dataWrite(recPts_list,midPts_list,radius_list)
        time.sleep(1)
test()      


"""
MODO:///排错：
160916,连线方法不合理导致gh出现重复的点:5:4 --> 4:5 ,4:5 --> 5:4连两次 
160916,优化连线的算法
160916,优化dict与list的转化关系
160916,随机后的值重复
"""


"""
20160615
 def getDistance4SidePts(sidePts_dict):
    #计算边界上点每两点之间的距离,
    distance_dict = {}
    for i in sidePts_dict: #循环索引的还是key
        for j in sidePts_dict:
            key = '%s;%s'%(i,j)
            dist = math.sqrt(((sidePts_dict[i][0] - sidePts_dict[j][0]) ** 2 + (sidePts_dict[i][1] - sidePts_dict[j][1]) ** 2)) #直角三角形计算两点距离
            distance_dict[key] = dist
    print (len(distance_dict))

def filterDistance(distance_dict):
    #过滤连线的规则，同一边上的线不相连，只有异边之间的点可以相连
    #网格上的索引为(a1,b1) (a2,b2) 同时满足 a1 != a2, b1 != b2 的点被留下来，其余被删去
    #
    new_distance_dict = distance_dict
    for key in new_distance_dict:
        if key[0]==key[4] or key[2]==key[6]:
            new_distance_dict[key] = 0    #把不符合的距离先变为0，和距离为0的统一在后面忽略
    #print (new_distance_dict)
    #rint (distance_dict)
    return new_distance_dict
new_distance_dict =  filterDistance(distance_dict)



#得到距离最小x条连线的中点list:midPt_list
#从x条线中随机得到y条
x = 10
y = 3
def byDist(t):
    #定义一个用于sorted的排序方式
    return t[1]
#把dict转化成列表，但是保留数据结构，即转化key/value的形式，变成list的索引值
distance_list = []
for dist_key in new_distance_dict:
    if new_distance_dict[dist_key] != 0.0: #删除自身点之间的连线距离，即不要有0
        distance_list.append([dist_key,new_distance_dict[dist_key]])
sortDist_list = sorted(distance_list,key = byDist)
#print (sortDist_list)
minDist_list = sortDist_list[:x] #选择出距离最短的x条线
#print (minDist_list)
reMinDist_list = []

for i in range(y): #在x条线中，随机再选择y条
    reMinDist_list.append(random.choice(minDist_list))
print (reMinDist_list)
midPt_list = []
for minDist in reMinDist_list:
    #print (minDist[0])
    firstPt,secondPt = minDist[0].split(';') #连线距离最短两点的网格标签
    #print (firstPt,secondPt,'type :%s'%(type(firstPt)))                                  #MODO:在创建字典的时候，是使用字符串还是元组
    minPt = [(sidePts_dict[firstPt][0]+sidePts_dict[secondPt][0])*0.5,(sidePts_dict[firstPt][1]+sidePts_dict[secondPt][1])*0.5,0]
    midPt_list.append(minPt)


#得到相应的半径list,值域范围根据场地的大小决定,r_list
r_max = a/m * 1
r_min = a/m * 0.5
r_list = []
for r_radius in range(len(midPt_list)):
    r = random.random()*r_max + r_min
    r_list.append(r)
print (len(r_list))


def dataWrite():
    #print (r_list)
    #with open('E:\tim\prac\py\class\haystack','w') as f:
    f = open('E:/tim/prac/py/class/haystack/data.txt','w')
    
    for i in range(len(midPt_list)):
        #format:  0:x,y,z;radius    
        f.write('%d' % i)
        f.write(':')
        f.write('%f,%f,%f'% (midPt_list[i][0],midPt_list[i][1],midPt_list[i][2]))
        f.write(';')
        f.write('%f'% r_list[i])
        f.write('*')
    for j in range(len(recPts_list)):

        f.write(('%f,%f,%f')%(recPts_list[j][0],recPts_list[j][1],recPts_list[j][2]))
        f.write('/')
    
    
    f.close()
    print ('dataWrite process has been finished..')

def testWrite():
    L = [1,2,3,4,'77','abc']
    f = open('E:/tim/prac/py/class/haystack/data.txt','w')
    for i in range(5):
        f.write('%s'% i )
        f.write(';')
    f.close()
    print ('testWrite process has been finished..')
    f = open('E:/tim/prac/py/class/haystack/data.txt','r')
    print (type(f.read()))


def getMinDist0():
    #控制最小的距离于一个范围(这样得到的最小线段不是很合理)
    epsilon = 1.5
    min_list = []
    for dist_key in distance_dict:
        if distance_dict[dist_key] <= epsilon:
            min_list.append([dist_key,distance_dict[dist_key]])
    print (min_list)



def getMinDist1():
    #把dict转化成列表，但是保留数据结构，即转化key/value的形式，变成list的索引值
    distance_list = []
    for dist_key in distance_dict:
        distance_list.append([dist_key,distance_dict[dist_key]])
    min_list = sorted(distance_list,key = byDist)
    print (min_list)
    return min_list

#getMinDist1()


    




def test():
    #print (pts_dict[(0,0)])
    #print (pts_dict[(n,m)])
    #print (sidePts_dict)
    #print ('****')
    #print (distance_dict)
    #print (len(sidePts_list) == ((n+1) + (m+1))*2 )
    #print (distance_dict)
    pass
filterDistance(distance_dict)
    


test()
"""
#dataWrite()
#testWrite()



"""
#得到距离最小x条连线的中点 
#sort_list = sorted(list(distance_dict.values())) #///如果把原来的dict转化成list的话，就相当于把数据结构拍平了，所以还是应该在dict中进行转化
#print (sort_list)
 #///MODO: 怎么根据value的值，对字典进行排序，还是说，字典本身就是无序的，只能索引出最小那几个值的连线
#定制一个对字典排序的类
class SortedKeyDict(dict): #///从Dict类中继承
    def values(self):
        return (super(SortedKeyDict,self).values())
myDict = {1:50,4:40,2:20,3:30}
sortDict = SortedKeyDict(myDict)
print (sortDict)

#sortedDictance_dict = SortedKeyDict(distance_dict)
#print (sortedDictance_dict())
"""
