#__init__()_super().py


#///讨论super()和__init__()的区别
class Base(object):
    def __init__(self):
        print ('Base created')

class ChildA(Base):
    def __init__(self):
        Base.__init__(self)

class ChildB(Base):
    def __init__(self):
        super().__init__()  #2.X中的用法是super(ChildB,self).__init__() 3.X中不用在super()方法中写入ChildB,self

a = ChildA()
b = ChildB()
#Base created
#Base created

#///结果类似，但是super()避免了直接使用父类的名字，主要用于多重继承

"""
#super()函数的实质
def super(cls,inst):
    mro = inst.__class__.mro()
    return mro[mro.index(cls)+1]
"""
#inst负责生成MRO的list
#通过cls定位当前的mro中的index,并返回mro[index+1]
#MRO = Method Resolution Order,代表了类继承的顺序

class Root(object):
    def __init__(self):
        print ("this is Root")

class B(Root):
    def __init__(self):
        print ("enter B")
        #print (self)
        super().__init__()
        print ("leave B")

class C(Root):
    def __init__(self):
        print ("enter C")
        #print (self)
        super(C,self).__init__()
        print ("leave C")

class D(B, C):
    pass

d = D()
print (d.__class__.__mro__) #print出类的顺序
"""
enter B
enter C
this is Root
leave C
leave B
(<class '__main__.D'>, <class '__main__.B'>, <class '__main__.C'>, <class '__main__.Root'>, <class 'object'>)
"""
print (d.__class__) #print 出实例所属的类

#super()的调用与父类没有实质的关联
#(<class '__main__.D'>, <class '__main__.B'>, <class '__main__.C'>, <class '__main__.Root'>, <class 'object'>)
#从这里__mro__()方法的返回值可以看出,D没有__init__()方法，先去调用B的,下一个调用C的

#///在MRO中基类永远出现在派生类后面，如果有多个基类，基类的相对顺序保持不变

def super(cls,inst):
    mro = inst.__class__.mro()
    return mro[mro.index(cls) + 1]

print (super(D,d))
#<class '__main__.D'>

#过程的实质是不断的调用super的内部机制