#13.11_object_inherit.py

class P(object):
    pass

class C(P):
    pass

c = C()
print (c.__class__)
#<class '__main__.C'>
#print (dir(c))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__']

#print (c.__bases__)  __bases__是类的特殊的属性
print (C.__bases__) #child's parent class(es) 子类的父类
#(<class '__main__.P'>,)

#print (dir(C))

print (c.__class__.__name__)
#C

class P(object): #Parent Class 
    'P class'
    def __init__(self):
        print ('created an instance of ',self.__class__.__name__)
        #print ('created an instance of ',self.__bases__.__name__)

class C(P): #///C继承了P的__init__()
    pass

c = C()
#created an instance of  C
print (c.__class__.__name__)
#C

p = P() #parent instance
#created an instance of  P

print (p.__class__)  #__class__ 显示实例所属的类名
#<class '__main__.P'>

print (P.__base__)  #显示父类的父类
#<class 'object'>

print (P.__doc__) #parent's doc string 父类的文档的字符串
#P class
print (p.__doc__) #对实例也可以调用__doc__属性
#P class

c = C() 
#created an instance of  C
print (c.__class__)
#<class '__main__.C'>
print (C.__bases__)
#(<class '__main__.P'>,)
print (C.__doc__)          #///文档字符串对函数（方法），对类来说都是唯一的。特殊的属性不会被继承
#None


#__bases__类属性
class A(object):pass

class B(A):pass 

class C(B):pass

class D(object):pass

class E(B,D):pass 


print (A.__bases__)
#(<class 'object'>,)
print (B.__bases__)
#(<class '__main__.A'>,)
print (C.__bases__)
#(<class '__main__.B'>,)
print (D.__bases__)
print (E.__bases__)
#(<class '__main__.B'>, <class '__main__.D'>)

#继承覆盖
class P(object):
    def foo(self):
        print ('Hello I am P-foo')

p = P()
p.foo()
#Hello I am P-foo

class C(P):
    def foo(self):
        print ('Hello I am C-foo')
c = C()
c.foo()
#Hello I am C-foo

#调用被覆盖的基类

P.foo(c) #///调用被覆盖的基类
#Hello I am P-foo 

class C(P):
    def foo(self):
        P.foo(self)  #///通常要调用被覆盖的基类，会重写子类的方法。但这里是显式的调用
        print ('Hi,I am C-foo')
c = C()
c.foo()
#Hello I am P-foo
#Hi,I am C-foo

class C(P):
    def foo(self):
        super(C,self).foo() #///更好的方法是使用super内建方法，super函数会找到基类，还会传入self 
        print ('Hi,I am C-foo')

c = C()
c.foo()
#Hello I am P-foo
#Hi,I am C-foo

#如果在子类中重写构造器，父类的__init__()不再被调用

class P(object):
    def __init__(self):
        print ('calling P\'s constructor')

class C(P):
    def __init__(self):
        print ('calling C\'s constructor')

c = C()
#calling C's constructor

#子类重写了__init__()还想调用基类的__init__()

class C(P):
    def __init__(self):
        super(C,self).__init__()  #///找到C类的基类，并传入self
        print ('calling C\'s constructor')

c = C()
#calling P's constructor
#calling C's constructor

#///super()内建函数的好处是，python自动找到基类。如果此时改变了继承关系，只要修改class代码一句，不用改super()这一句。


#13.11.3 从标准类型派生

class RoundFloat(float):
    def __new__(cls,val): 
        #return float.__new__(round(cls,val))
        return float.__new__(cls,round(val,2)) #///所有__new__()方法都是类方法，要显示传入第一个参数，类似__init__()传入self

#///用super()捕获父类的__new__
class RoundFloat(float): #RoundFloat是float的子类
    def __new__(cls,val):
        return super(RoundFloat,cls).__new__(cls,round(val,2))
        #super(RoundFloat,cls).__new__() #///捕获
        #return float.__new__(cls,round(val,2))
print (RoundFloat(1.5955))
#1.6
print (RoundFloat(1.5945))
#1.59
print (RoundFloat(-1.9955))
#-2.0

#///可变类型的例子

d = {1:'a',2:'b',4:'c',3:'d'}
d_key = d.keys()
print (d_key)
#dict_keys([1, 2, 3, 4])

class SortedKeyDict(dict):
    def keys(self):
        return (super(SortedKeyDict,self).keys())

#创建字典 dict() dict(mapping) dict(sequence_of_2_tuples) dict(**kwargs)来创建
d = SortedKeyDict((('zheng-cai',67),('hui-jun',68),('xin-yi',2)))
print (d)
#{'xin-yi': 2, 'zheng-cai': 67, 'hui-jun': 68}

print ('By iterator:'.ljust(12),[key for key in d])             #///ljust(12)的用法
print ('By keys():'.ljust(12),d.keys())
#By iterator: ['xin-yi', 'zheng-cai', 'hui-jun']
#By keys():   dict_keys(['xin-yi', 'zheng-cai', 'hui-jun'])
