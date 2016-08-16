#cxt_18.py

#求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

def superAdd(num,count=1):
    #至少有一个数相加
    numList = []
    numList.append(num)
    n = num
    while count>1:
        n = n*10+num
        numList.append(n)
        count-=1
    return {
        'sum':sum(numList),
        'list':numList
    }
        

print (superAdd(2,5))

#用函数迭代自身，直接出结果
init_num = 2
count = 2
def addIteration(num,count):
    if count == 0:
        return num
    return addIteration(num*10+2,count-1)

addResult = 0
for i in range(count+1):
    addResult +=addIteration(init_num,i)

print (addResult)

print (addIteration(init_num,count))    #///2+22+222

#///源码
Tn = 0
Sn = []
n = 3
a = 2
for count in range(n):
    Tn = Tn + a
    a = a * 10
    Sn.append(Tn)
    print (Tn)

#Sn = reduce(lambda x,y:x+y,Sn)
#print (Sn)
