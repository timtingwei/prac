#13.13.2_object_Time60.py

#数值定制
#用来操作时间，精确到小时和分

class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min

print (dir(Time60))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__']

#需要通过实例直接输出的话，需要覆盖__str__甚至__repr__
#4:30 
class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min
    
    def __str__(self):
        #return '%s : %s'%(self.hr,self.min)
        return '%d : %d'%(self.hr,self.min)
t = Time60(4,30)
print (t)
mon = Time60(10,30)
tue = Time60(11,15)
print (mon,tue)
#10 : 30 11 : 15

print (mon.__class__)
#<class '__main__.Time60'>   ==> 相当于Time60()

class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min

    def __str__(self):
        return '%d : %d'%(self.hr,self.min)

    def __add__(self,other): #//MODO: 覆盖原本的__add__()函数，
        return self.__class__(self.hr + other.hr ,self.min + other.min)   #MODO: 在类中一般用 self.__class__ 调用类名，而不直接用类名调用。不需要自己多加思考。

    __repr__ = __str__    

mon = Time60(10,30)
tue = Time60(11,15)
wed = mon + tue
print (wed)
thu = Time60(11,44)
print (wed + thu )
#32 : 89

#///MODO： 原位相加:原位前后修改了原来的对象，而没有创建一个新的对象

class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min

    def __str__(self):
        return '%d : %d'%(self.hr,self.min)

    def __add__(self,other): #//MODO: 覆盖原本的__add__()函数，
        return self.__class__(self.hr + other.hr ,self.min + other.min)   #MODO: 在类中一般用 self.__class__ 调用类名，而不直接用类名调用。不需要自己多加思考。

    __repr__ = __str__  

    def __iadd__(self,other):
        self.hr += other.hr
        self.min += other.min
        return self

mon = Time60(10,30)
tue = Time60(11,15)
print (mon + tue)
#21 : 45
print (id(tue))
#42513360
tue += mon
print (tue)
#21 : 45
print (id(tue))
#42513360

#print (tue - mon)
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.13.2_object_Time60.py", line 87, in <module>
    print (tue - mon)
TypeError: unsupported operand type(s) for -: 'Time60' and 'Time60'
"""


#///time60.py
#中级定制

class Time60(object):
    'Time60 - track hours and minutes'
    def __init__(self,hr,min):
        self.hour = hr
        self.min = min

    def __str__(self):
        return '%d : %d'%(self.hour,self.min)

    def __add__(self,other):
        'Time60 - overloading the addition operator'
        #self.hour += other.hour
        #self.min += other.min
        #return self
        return self.__class__(self.hour+ other.hour,self.min + other.min)    #///在类函数中调用类名的方法 self.__class__()
    
    def __iadd__(self,other):   #///没分清楚两者的区别是什么
        'Time60 - overloading in-place addition'
        self.hour += other.hour
        self.min += other.min
        return self

    __repr__ = __str__

mon = Time60(11,10)
tue = Time60(10,15)
print (mon)
print (mon+tue)
#print (dir(Time60))
mon += tue
print (mon)
    
    
