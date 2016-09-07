#13.6_object_instance_attribute.py

class RoomFareCalcus(object):
    '''Calculate the room fare'''
    def __init__(self,rr,st=0.085,rt=0.1):
        """RoomFareCalcus default arguments:
        sales tax == 8.5% room tax == 10%
        """
        self.roomRate = rr
        self.salesTax = st
        self.roomTax = rt

    def caluAllRate(self,days=1):
        """calculate all room rate;default to daily rate
        days == 1 
        """
        daily = round((self.roomRate  * (1+self.salesTax+self.roomTax)),2)
        return float(days) * daily


def testRoomFareCalcus():
    c = RoomFareCalcus(1000)
    print (c.caluAllRate(4))
    #66360.0
    sfo = RoomFareCalcus(299)
    print (sfo.caluAllRate())
    #4960.41
    print (sfo.caluAllRate(2)) #2-day rate
    #9920.82
    sea = RoomFareCalcus(189,0.086,0.058) #new instance
    print (sea.caluAllRate())
    #3027.02
    print (sea.caluAllRate(4))
    #864.88
    wasWkDay = RoomFareCalcus(169,0.045,0.02)
    wasWkEnd = RoomFareCalcus(119,0.045,0.02)
    aWkFare = wasWkDay.caluAllRate(5) + wasWkEnd.caluAllRate(2)
    print (aWkFare)
    #1153.36

testRoomFareCalcus()

#///__init__应当返回None
class MyClass(object):
    pass
mc = MyClass()
print (mc)
#<__main__.MyClass object at 0x02859170>

#__init__应当返回None,不然出现TypeError,实例对象是自动在实例化调用后才返回的。
class MyClass(object):
    def __init__(self):
        print ('initialized')
        #return 1
mc = MyClass()
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.6_object_instance_attribute.py", line 54, in <module>
    mc = MyClass()
TypeError: __init__() should return None, not 'int'
"""

#查看实例属性
class C(object):
    foo = 'Tim'
    bar = 'Cooper'

c = C()
print (c.foo)
print (c.bar)
print (dir(c)) #dir()可以返回实例或者类的属性名称列表
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar', 'foo']
print (dir(C))
##['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar', 'foo']
print (c.__dict__)
#{}
c.foo = 'Tim'
c.bar = 'Cooper'
print (c.__dict__)
#{'bar': 'Cooper', 'foo': 'Tim'} #类的__dict__返回类的属性字典

print (C.__dict__)
#{'__doc__': None, '__weakref__': <attribute '__weakref__' of 'C' objects>, '__module__': '__main__', 'bar': 'Cooper', 'foo': 'Tim', '__dict__': <attribute '__dict__' of 'C' objects>}
print (C.__dir__)
#<method '__dir__' of 'object' objects>

#特殊的实例属性
#C.__class__ 和 C.__dict__

class C(object):
    pass
c = C()
print (dir(c))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__']
print (c.__dict__) #字典中只有实例属性，没特殊属性和类的属性
#{}
print (c.__class__)
#<class '__main__.C'>

c.foo = 'Tim'
c.bar = 'Cooper'
print (dir(c))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar', 'foo']
print (c.__dict__)
#{'bar': 'Cooper', 'foo': 'Tim'}
print (c.__class__)
#<class '__main__.C'>

#内建类的属性

x = 3 + 0.14j
print (x.__class__)
#<class 'complex'>
#print (x.__dict__)                                                     #////内建类型中不存在__dict__属性
print (dir(x))
#['__abs__', '__add__', '__bool__', '__class__', '__delattr__', '__dir__', '__divmod__', '__doc__', '__eq__', '__float__', '__floordiv__', '__format__', '__ge__', '__getattribute__', '__getnewargs__', '__gt__', '__hash__', '__init__', '__int__', '__le__', '__lt__', '__mod__', '__mul__', '__ne__', '__neg__', '__new__', '__pos__', '__pow__', '__radd__', '__rdivmod__', '__reduce__', '__reduce_ex__', '__repr__', '__rfloordiv__', '__rmod__', '__rmul__', '__rpow__', '__rsub__', '__rtruediv__', '__setattr__', '__sizeof__', '__str__', '__sub__', '__subclasshook__', '__truediv__', 'conjugate', 'imag', 'real']
print (getattr(x,'real'))
#3.0
attr_list = [getattr(x,i) for i in ('conjugate','imag','real')]
print (attr_list)
#[<built-in method conjugate of complex object at 0x02747578>, 0.14, 3.0]
print (x.imag)
#0.14
print (x.real)
#3.0
print (x.conjugate)
#<built-in method conjugate of complex object at 0x02817608>


#实例属性和类属性

class MyClass(object):
    version = 1.1

c = MyClass()
print (MyClass.version)
#1.1
print (c.version)
#1.1
MyClass.version += 1
print (MyClass.version)
#2.1
print (c.version)
#2.1
c.version += 0.5
print (c.version) #///Python会先访问实例的属性，其次访问类的属性。也就是类的属性被遮蔽了。
#2.6
print (MyClass.version)
#2.1
del c.version #删除实例c的version属性后，重新创建
print (c.version)
#2.1

#从实例中访问类的属性要谨慎
class Foo(object):
    x = 1.5
foo = Foo()
print (foo.x)
#1.5
foo.x = 2.5
print (foo.x)
#2.5
print (Foo.x) #///类属性没有变只是创建了一个新的实例属性，覆盖了对类x属性的引用
#1.5
del foo.x
print (foo.x) #///删除后被重新引用的话，类属性被暴露出来
#1.5 

#///属性已经存在于类字典[__dict__]中，通过赋值被加入到实例的__dict__中

#类属性可变的情况下
class MyClass(object):
    x = {2003:'poe2'}

c1 = MyClass()
print (c1.x)
#{2003: 'poe2'}
c1.x = {1:'tim'}
print (c1.x)
#{1: 'tim'}
print (MyClass.x)
#{2003: 'poe2'}

c2 = MyClass()
print (c2.x)
#{2003: 'poe2'}
"""
c2.x = {2003:'poe2',2004:'aaa'}   #///这样重新引用一个对象没有效果
"""
c2.x[2004] = 'aaa'
print (c2.x)
#{2003: 'poe2', 2004: 'aaa'}
print (MyClass.x)
#{2003: 'poe2', 2004: 'aaa'}
#del c2.x #///没有遮蔽删除不掉
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.6_object_instance_attribute.py", line 195, in <module>
    del c2.x
AttributeError: x
"""
class MyClass(object):
    foo = [1,2,3]

c3 = MyClass()
print (c3.foo)
#[1, 2, 3]
c3.foo.append(10)
print (c3.foo)
#[1, 2, 3, 10]
print (MyClass.foo)
#[1, 2, 3, 10]

"""
#tuple不能被索引赋值
MyClass.foo = (1,3,3)
c4 = MyClass()
print (c4.foo)
c4.foo[3] = 5
print (c4.foo)

#string也是不可变对象，
MyClass.foo = 'abcd'
c5 = MyClass()
print (c5.foo)
c5.foo[0] = '99'
print (c5.foo)
print (MyClass.foo)
"""
#///字符串，元组，数字是不变对象，在可变对象为静态属性的时候要小心赋值

#类属性持久性

class MyClass(object):
    spam = 100 #类属性

c1 = MyClass()
print (c1.spam)
MyClass.spam += 100
print (MyClass.spam)
#200
print (c1.spam)
#200
c2 = MyClass()
del c1 #删除c1实例
MyClass.spam += 200
print (MyClass.spam)
#400
print (c2.spam)
#400

#///使用实例属性来修改类的属性是很危险的。因为实例拥有他们自己的属性集，Python中没有明确的方法来修改你想要修改的同名的类属性，没有global关键字,修改类属性需要使用类名，而不是实例名字
def testGlobal():
    tg = 1
    global tg
    return None

print (tg)

