#13.12_object_build-in-function.py

#issubclass(sub,sup),判断一个类是另外一个类的子类或者子孙类,不严格包括，第二个参数可以是tuple

class P1(object):
    pass

class P2(object):
    pass

class S1(P1):
    pass

class GS1(S1, P1):
    pass

class GS2(S1, P2):
    pass

gs = GS1()
gs2 = GS2()
print (issubclass(GS1,P1))
#True
print (issubclass(GS1,P2))
#False
print (issubclass(GS2,P1)) #MODO: 孙类GS2是GS1的子类，GS1是P1的子类
#True
print (issubclass(S1,P2))
#False
print (issubclass(S1,(P1,P2))) #MODO: 第二个参数可以为元组，在元组中只要有一个类满足，便返回True
#True
print (issubclass(S1,S1)) #MODO: 如果两个参数相同，代表自身包含自身，则返回True
#True


#isinstance()判定一个对象是否为给定类,或者子类的实例
#isinstance(obj1,obj2)  #MODO: obj1 == instance obj2 = class
class C(object):
    pass

class P(object):
    pass

class S(C):
    pass

s = S()
print (isinstance(s,S)) #MODO: 指定类的实例
#True
print (isinstance(s,C)) #MODO: 子类的实例
#True
print (isinstance(s,P)) #不是实例
#False
print (isinstance(s,(P,C))) #MODO: 使用元组作为第二个参数
#True
#print (isinstance(C,s)) #MODO: 实例在前，类在后
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.12_object_build-in-function.py", line 54, in <module>
    print (isinstance(C,s))
TypeError: isinstance() arg 2 must be a type or tuple of types
"""

#**attr()系列函数
#不局限于类(class)和实例(instances)
#传入正在处理的对象作为第一个参数，属性名作为函数的第二个参数，是这些属性的字符串名字。obj.attr() == *attr(obj,'attr')

#here are some example using all the *attr() BIFs:

class MyClass(object):
    def __init__(self):
        self.foo = 100

myInst = MyClass()
#print (hasattr(myInst,foo)) MODO: 第二个参数需要是字符串
print (hasattr(myInst,'foo'))
#True
print (getattr(myInst,'foo'))
#100
print (hasattr(myInst,'bar'))
#False
setattr(myInst,'bar',200) #///MODO: 直接设置属性
print (hasattr(myInst,'bar'))
#True
print (getattr(myInst,'bar'))
#200
print (getattr(myInst,'bar','oops')) #getattr(inst,'attr',[value]) 如果没有bar属性，设置成'oops'，返回出来
#200
delattr(myInst,'bar') #///MODO: 删除bar属性
print (getattr(myInst,'bar','oops')) #没有bar属性，被设置返回
#oops
#print (getattr(myInst,'bar')) #///MODO:getattr不是真的设置
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.12_object_build-in-function.py", line 92, in <module>
    print (getattr(myInst,'bar'))
AttributeError: 'MyClass' object has no attribute 'bar'
"""
setattr(myInst,'bar','my attr')
print (dir(myInst))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar', 'foo']
print (getattr(myInst,'bar'))
#my attr
delattr(myInst,'foo') #///MODO: 删除myInst实例中的'foo'属性
print (dir(myInst))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar']
print (hasattr(myInst,'foo'))
#False

#dir() 不光可以作用于对象，还可以作用于对象上
class MyClass(object):
    def __init__(self):
        self.name = 'Tim'
mc = MyClass()
print (dir(mc)) #作用于实例
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'name']
print (dir(MyClass)) #作用于类的时候，没有构造器中赋予的属性
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__']
a = 5
print (dir(a)) #///MODO: 显示a的引用对象的属性
#['__abs__', '__add__', '__and__', '__bool__', '__ceil__', '__class__', '__delattr__', '__dir__', '__divmod__', '__doc__', '__eq__', '__float__', '__floor__', '__floordiv__', '__format__', '__ge__', '__getattribute__', '__getnewargs__', '__gt__', '__hash__', '__index__', '__init__', '__int__', '__invert__', '__le__', '__lshift__', '__lt__', '__mod__', '__mul__', '__ne__', '__neg__', '__new__', '__or__', '__pos__', '__pow__', '__radd__', '__rand__', '__rdivmod__', '__reduce__', '__reduce_ex__', '__repr__', '__rfloordiv__', '__rlshift__', '__rmod__', '__rmul__', '__ror__', '__round__', '__rpow__', '__rrshift__', '__rshift__', '__rsub__', '__rtruediv__', '__rxor__', '__setattr__', '__sizeof__', '__str__', '__sub__', '__subclasshook__', '__truediv__', '__trunc__', '__xor__', 'bit_length', 'conjugate', 'denominator', 'from_bytes', 'imag', 'numerator', 'real', 'to_bytes']
print (dir()) #///MODO: 不带参数的时候，显示显示调用者的局部变量
#['C', 'GS1', 'GS2', 'MyClass', 'P', 'P1', 'P2', 'S', 'S1', '__builtins__', '__cached__', '__doc__', '__file__', '__loader__', '__name__', '__package__', 'a', 'gs', 'gs2', 'mc', 'myInst', 's']


#super()
#///MODO: 帮助程序员找出相应的父类，方便调用相关的属性。非绑定式调用祖先的方法，使用super()可以简化搜索一个合适的祖先任务，并在调用时，替你传入self(实例)

#vars()
#MODO: 类似于dir()，作用对象必须有一个__dict__
class C(object):
    pass

c = C()
c.foo = 100
c.bar = 'Tim'
print (dir(c))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'bar', 'foo']
print (c.__dict__)
#{'bar': 'Tim', 'foo': 100}
print (vars(c))
#{'bar': 'Tim', 'foo': 100}