#13.3_object_class.py

class C(object):
    """
    def __init__(self):
        self.a = 100
    """
    foo = 100

inst = C()
print (inst.foo)
#100
print (C.foo)
#100
C.foo = C.foo + 1 #///直接对类的属性
print (C.foo)
#101
print (inst.foo) 
#101

#Method
class MyClass(object):
    ' '
    def myNoActionMethod(self):
        pass

mc = MyClass()
mc.myNoActionMethod()

#///两种错误的调用
#myNoActionMethod() #///不同于函数的调用方法
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.3_object_class.py", line 29, in <module>
    myNoActionMethod()
NameError: name 'myNoActionMethod' is not defined
"""
#///NameError 说明全局变量中没有这样的函数，myNoActionMethod()调用方法说明他是一个方法，属于一个类，而不是全局空间中的名字

#MyClass.myNoActionMethod()
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.3_object_class.py", line 40, in <module>
    MyClass.myNoActionMethod()
TypeError: myNoActionMethod() missing 1 required positional argument: 'self'
"""
#///绑定：OOP中没有实例，方法是不能被调用的，方法只能通过实例来调用

#Attribution
class MyClass(object):
    'MyClass class definition' #MyClass类定义
    myVersion = '1.1' #static data 静态数据
    def showMyVersion(self): #method 
        print (MyClass.myVersion)

print (dir(MyClass))  #///dir是build-in-function dir(类的名称) 返回对象的属性名字列表
"""
['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'myVersion', 'showMyVersion']
"""
print (MyClass.__dict__) #__dict__返回的是一个字典，有相应的键和键值
"""
{'__dict__': <attribute '__dict__' of 'MyClass' objects>, 'myVersion': '1.1', '__weakref__': <attribute '__weakref__' of 'MyClass' objects>, '__doc__': 'MyClass class definition', 'showMyVersion': <function MyClass.showMyVersion at 0x0282AED0>, '__module__': '__main__'}
"""
#MyClass.__dict__

#showMyVersion,myVersion,__doc__,__module__,是所有类都具备的特殊类属性。内建的vars()函数接受类对象作为参数,返回类的__dict__属性的内容

#特殊的类属性
"""
C.__name__  类C的名字（字符串）
C.__doc__   类C的文档
C.__bases__ 类C的所有父类构成的元组
C.__dict__  类C的属性
C.__module__  C定义的所有模块
C.__class__ 实例C对应的类
"""

print (MyClass.__name__)
#MyClass
print (MyClass.__doc__)
#MyClass class definition
print (MyClass.__bases__)
#(<class 'object'>,)
print (MyClass.__dict__)
#{'__dict__': <attribute '__dict__' of 'MyClass' objects>, 'myVersion': '1.1', '__doc__': 'MyClass class definition', '__weakref__': <attribute '__weakref__' of 'MyClass' objects>, '__module__': '__main__', 'showMyVersion': <function MyClass.showMyVersion at 0x0281AE88>}
print (MyClass.__module__) #类的模块名字
#__main__
print (MyClass.__class__) #类的类型是type,一个类已经是一种类型了
#<class 'type'>

stype = type('What is your quest?')
print (stype)
#<class 'str'>
print (stype.__name__) #得到类型名
#str
print (type(3.14159265)) #又一个类型对象
#<class 'float'>
print (type(3.1415926).__name__)
#float 

class C(object):
    pass

print (C)
#<class '__main__.C'>
print (C.__module__)
#__main__

from math import sin
print (sin)
#<built-in function sin>
print (sin.__module__) #sin类的模块名
#math
