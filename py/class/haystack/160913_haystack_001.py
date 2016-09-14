#160913_haystack_001.py

import math
#对矩形的边长赋值
a = 5 #长为a
b = 10 #高为b
n = 4 #长边分为n段
m = 6 #高边分为m段
pts_dict = {} #储存网格点的索引位置和坐标值
sidePts_dict = {}
for i in range (n+1):
    for j in range (m+1):
        pts_dict[(i,j)] = [i*(a/n),j*(b/m),0] #得到每个点的{索引位置(i,j)：[x,y,z])}的索引字典
        if i == 0 or j == 0 or i == n or j == m:
            sidePts_dict[(i,j)] = pts_dict[(i,j)]
            #print ((i,j),sidePts_dict[(i,j)])

print (sidePts_dict)
#计算边界上点每两点之间的距离
distance_dict = {}
for sidePt_i in sidePts_dict: #循环索引的还是key
    for sidePt_j in sidePts_dict:
        key = '%s;%s'%(sidePt_i,sidePt_j)
        dist = math.sqrt(((sidePts_dict[sidePt_i][0] - sidePts_dict[sidePt_j][0]) ** 2 + (sidePts_dict[sidePt_i][1] - sidePts_dict[sidePt_j][1]) ** 2)) #直角三角形计算两点距离
        distance_dict[key] = dist
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

#得到距离最小x条连线的中点 
x = 10
def byDist(t):
    #定义一个用于sorted的排序方式
    return t[1]
#把dict转化成列表，但是保留数据结构，即转化key/value的形式，变成list的索引值
distance_list = []
for dist_key in distance_dict:
    if distance_dict[dist_key] != 0.0: #删除自身点之间的连线距离，即不要有0
        distance_list.append([dist_key,distance_dict[dist_key]])
sortDist_list = sorted(distance_list,key = byDist)
minDist_list = sortDist_list[:x]
print (minDist_list)
minPt_list = []
for minDist in minDist_list:
    #print (minDist[0])
    print (minDist)
    firstPt,secondPt = minDist[0].split(';')) #连线距离最短两点的网格标签
    print (firstPt,secondPt,'type :%s'%(type(firstPt)))                                  #MODO:在创建字典的时候，是使用字符串还是元组
    #print (sidePts_dict)
    print (sidePts_dict[(0,1)],'*************')
    #print (sidePts_dict[firstPt])
    #minPt = [(sidePts_dict[firstPt][0]+sidePts_dict[secondPt][0])*0.5,(sidePts_dict[firstPt][1]+sidePts_dict[secondPt][1])*0.5,0]
    #midPt_list.append(ptCoordinate)
#print (midPt_list)


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


    



"""
def test():
    #print (pts_dict[(0,0)])
    #print (pts_dict[(n,m)])
    print (sidePts_dict)
    print ('****')
    #print (distance_dict)
    #print (len(sidePts_list) == ((n+1) + (m+1))*2 )
    #print (distance_dict)
    


test()
"""