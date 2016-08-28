#06_def_01_fibonacci.py

def fib(n,count):
    #///先创建fib数列
    fibn = 20
    a = 0
    b = 1
    fibLst = []
    fibLst.append(a)
    fibLst.append(b)
    while fibn>0:
        a,b = b,a + b
        fibLst.append(b)
        fibn-=1
    #///在数列中寻找
    fibLstCount = []
    sub = [abs(i-n)for i in fibLst ]
    closesti = sub.index(min(sub))
    while count>0:
        fibLstCount.append(fibLst[closesti])
        closesti+=1
        count-=1
    return fibLstCount

print (fib(0,5))
#[0,1,1,2,3]
print (fib(1,3))
#[0,1,1]
print (fib(9,3))
#[8,13,21]
print (fib(131,5))
#[144,233,377,610,987]

#///源码
def fib(s,count):
    fiblst = [0,1]
    fiblstcount =  [] #放置开始位置和数量的数列
    if s==0 or s==1:#指定条件s为0或者为1时
        fiblstcount[:]=fiblst
        for i in range(count-2):
            fiblstcount.append(fiblstcount[-1]+fiblstcount[-2])
    else:
        while True:
            fiblst[:]=[fiblst[1],fiblst[0],fiblst[1]] #
            if fiblst[1]-s>0:break #fiblst列表只有两个值，当第二个值大于初始值s后，跳出循环
            fiblstcount[:]=fiblst
            if abs(fiblst[0]-s)>=abs(fiblst[1]-s):
                for i in range(count-1):
                    fiblstcount.append(fiblstcount[-1]+fiblstcount[-2])
                fiblstcount.pop(0)
            else:
                for i in range(count - 2):
                    fiblstcount.append(fiblstcount[-1]+fiblstcount[-2])
    return fiblstcount 

print (fib(0,5))
#[0,1,1,2,3]
print (fib(1,3))
#[0,1,1]
print (fib(9,3))
#[8,13,21]