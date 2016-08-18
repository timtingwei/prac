#cxt_20.py

#一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#///把落地和弹起看作一个过程,放入subL,再把这一过程放入L

def fall(height,times):
    #输入参数初始的高度以及落地反弹的次数
    L = []
    subL = []
    subL.append(height)
    subL.append(height*0.5)
    L.append(subL)
    print (L[-1][1])
    while times>1:
        subL = []
        height = L[-1][1]
        subL.append(height)
        subL.append(height*0.5)
        L.append(subL)
        times-=1
    return L

print (fall(100,3))

#十次下落过程
F = fall(100,10)
print (F)

#一般的循环方法
sum = 0
for i in range(len(F)):
    subSum = F[i][0]+F[i][1]
    sum += subSum
lastRebound = F[-1][1]
print ('第%d次反弹时候经过了%f m' % (len(F),sum-lastRebound))
print ('第%d次反弹高度 = %f m'  % (len(F),lastRebound))


#用reduce的方法
from functools import reduce
"""
def addList(x,y):
    return x+y

sum = reduce(addList,reduce(addList,F))
print (sum)
"""
asum = reduce(lambda x,y:x+y,F)
sum = reduce(lambda x,y:x+y,asum)
lastRebound = asum[-1]
print ('第%d次反弹时候经过了%f m' % (len(F),sum-lastRebound))
print ('第%d次反弹高度 = %f m'  % (len(F),lastRebound))


#///把相同距离的反弹+落地看作是一个过程
#///源码

Sn = 100.0
Hn = Sn / 2

for n in range(2,11):
    Sn += 2 * Hn
    Hn /= 2

print ('Total of road is %f meter' % Sn)
print ('The tenth is %f meter' % Hn)

#明确目的后，想算法，可能更直接。