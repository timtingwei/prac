#mit_lec06.py

def sqrtRootBi(n,epsilon):
    """iteration sqrt n squild times
    """
    assert n>0,'%s is nagative number'% n #///限制输入的参数
    assert epsilon>0,'%s is nagative number'% epsilon
    times = 0
    low = 0
    high = max(n,1)
    guess = (low + high)/2
    while abs(guess*guess - n)>epsilon and times<100: #///while用于次数未知
        #print ('low:%s,high:%s,guess:%s' % (low,high,guess)) ///用于检查
        if ( guess * guess < n ):
            low = guess
        else :
            high = guess
        guess = (low+high)/2
        times += 1
    assert times <= 100,'Iteration count exceeded!'
    print ('Bi method.  Num. iteration:', times ,'guess:' ,guess)
    return guess
    #if abs(guess*guess - n)<epsilon:
        #return guess
    #else:print ('increase your epsilon')
    #return None

def testBi():
    print ('      squareRoot(4, 0.0001 )')
    print (sqrtRootBi(4,0.0001))
    print ('      squareRoot(9, 0.0001 )')
    print (sqrtRootBi(9,0.0001))
    print ('      squareRoot(2, 0.0001 )')
    print (sqrtRootBi(2,0.0001))
    print ('      squareRoot(0.25, 0.0001 )')
    print (sqrtRootBi(0.25,0.00000001))

def squareRootNR(x,epsilon):
    """Assume x >= 0 and epsilon > 0
    Return y s.t. y*y is with epsilon of x
    """
    assert x >= 0,'x must be nagative,not' +str(x)
    assert epsilon > 0 ,'epsilon mush be positive,not' +str(epsilon)
    x = float(x)
    guess = x/2.0
    diff = guess ** 2 - x
    ctr = 1
    while abs(diff) > epsilon and ctr<=100 :
        #print ('Error:'diff,'guess:',guess)
        guess = guess - diff/(2.0*guess)
        diff = guess ** 2 - x
        ctr += 1
    assert ctr <= 100,'Iteration count exceeded'
    print ('NR method.  Num. iteration:',ctr,'guess',guess)
    return guess

def compareMethods():
    print ('      squareRoot(4, 0.0001 )')
    (sqrtRootBi(4,0.0001))
    (squareRootNR(4,0.0001))
    print ('      squareRoot(9, 0.0001 )')
    (sqrtRootBi(9,0.0001))
    (squareRootNR(9,0.0001))
    print ('      squareRoot(2, 0.0001 )')
    (sqrtRootBi(2,0.0001))
    (squareRootNR(2,0.0001))
    print ('      squareRoot(0.25, 0.0001 )')
    (sqrtRootBi(0.25,0.00000001))
    (squareRootNR(0.25,0.00000001))
    print ('      squareRoot(0.25, 0.0001 )')
    (sqrtRootBi(123456789,0.001))
    (squareRootNR(123456789,0.0001))

def showLists():
    Techs = ['MIT','Cal Tec']
    print (Techs)
    input()
    Ivys = ['Harvard','Yale','Brown']
    print (Ivys)
    input()
    Univs = []
    Univs.append(Ivys)
    print (Univs)
    input()
    for e in Univs:
        print (e)
        for c in e:print (c)
    Univs = Techs + Ivys
    print (Univs)
    input()
    Ivys.remove('Harvard')
    print (Univs)

testBi()
#compareMethods()
showLists()

