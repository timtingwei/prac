#!usr/bin/env python

#isinstance()接受tumple作为参数，不用想type()一样写一堆判断
def displayNumType(num):
    print (num,'is')
    if isinstance(num,(int,float,complex)): #isinstance中1对多
        print ('a number of type:',type(num).__name__)
    else:
        print ('not a number at all!!')

displayNumType(-69)
displayNumType(9999999999)
displayNumType(98.6)
displayNumType('xxx')

aStr = 'abc'
#print (dir(type(aStr)))
print (type(aStr).__name__)
#print (type(aStr).__doc__)