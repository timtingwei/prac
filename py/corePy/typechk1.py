#!usr/bin/env python

#调用两次type
def displayNumType(num):
    print (num,'is')
    if type(num) == type(0):
        print ("an integer")
    elif type(num) == type(0.0):
        print ('a float')
    elif type(num) == type(0+0j):
        print ('a complex number')
    else:
        print ('not a number at all !!')

displayNumType(99)

#减少调用次数 如果是同一对象的话，比较身份更优，不需要比较值
import types
print (help(types))
def displayNumType(num):
    print (num,'is')
    if type(num) is types.IntType:
        print ("an integer")
    elif type(num) is types.FloatType:
        print ('a float')
    elif type(num) is types.ComplexType:
        print ('a complex number')
    else:
        print ('not a number at all !!')

#减少查询次数
from types import IntType
if type(num) is IntType:

