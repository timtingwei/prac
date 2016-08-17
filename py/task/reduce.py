#reduce.py

#///reduce怎么用

#///需要import reduce
from functools import reduce

L = [1,2,3,4,5]
a = reduce(lambda x,y:x+y,L)
print (a)
suma = sum(L)
print (suma)

#///lambda x,y:x+y的类型
print (type(lambda x,y:x+y))
#<class 'function'>

#///reduce(function,iterable)一个函数和一个可迭代的对象

anotherL = [1,2,3,4]
def func(x,y):
    return -1*x*y

print (reduce(func,anotherL))
#-24
