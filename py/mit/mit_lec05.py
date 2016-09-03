#mit_lec05.py

a = 2 ** 1000
print (a)
b = 2 ** 999
print (b)
print (a/b)
#2.0

x = 0.1
print (x)
c = 2**1024
print (c)

i = 0.1
for i in range(10): i = i + 0.1
print (i)

import math
a = math.sqrt(2)
print (a * a == 2)
#False ///尽量不要等浮点数进行比较，而是判断能否足够接近
epsilon = 0.1
print (abs( a * a - 2)<epsilon)
#True

def near(x,y): #///定义一个新函数来判别是否相等
    epsilon = 0.0000000000001
    return (abs( x - y )<epsilon)

print (near(a*a,2))
#True

a = 1
#assert a!=1,'...'
print (a)

def sqrtRootBi(n,epsilon):
    """iteration sqrt n squild times
    """
    assert n>0,'%s is nagative number'% n #///限制输入的参数
    assert epsilon>0,'%s is nagative number'% epsilon
    times = 0
    low = 0
    high = n
    guess = (low + high)/2
    while abs(guess*guess - n)>epsilon and times<100: #///while用于次数未知
        #print ('low:%s,high:%s,guess:%s' % (low,high,guess)) ///用于检查
        if ( guess * guess < n ):
            low = guess
        else :
            high = guess
        guess = (low + high)/2
        times += 1
    assert times <= 100,'Iteration count exceeded!'
    return guess
    #if abs(guess*guess - n)<epsilon:
        #return guess
    #else:print ('increase your epsilon')
    #return None
print (sqrtRootBi(9,0.01))

print (True or False)

def testBi():
    print ('      squareRoot(4, 0.0001 )')
    print (sqrtRootBi(4,0.0001))
    print ('      squareRoot(9, 0.0001 )')
    print (sqrtRootBi(9,0.0001))
    print ('      squareRoot(2, 0.0001 )')
    print (sqrtRootBi(2,0.0001))
    print ('      squareRoot(0.25, 0.0001 )')
    print (sqrtRootBi(0.25,0.00000001))

testBi()