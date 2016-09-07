#11.3.6_object_decorator.py

#!/usr/bin/env python

from time import ctime,sleep
#ctime时戳
def tsfunc(func): #///显示何时调用函数的时戳的装饰器
    def wrappedFunc():
        print ('[%s] %s() called'% (ctime(),func.__name__) )
        return func()
    return wrappedFunc #///装饰器的返回值是一个“包装了”的函数

@tsfunc
def foo(): #///定义空函数用tsfunc来装饰
    pass

foo()
sleep(4)

for i in range(2):
    sleep(1)
    foo()

"""
[Wed Sep  7 21:21:09 2016] foo() called
[Wed Sep  7 21:21:14 2016] foo() called
[Wed Sep  7 21:21:15 2016] foo() called
"""

"""
def doFunc(func):
    def addFunction():
        print ('calling %s'%(func.__name__))
        #func() = func() + 5
        return func()  #///???返回这个方法是什么意思
    return addFunction

@doFunc
def foo():
    n = 5
    return n+5
"""
