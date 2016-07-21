#class.py -->13.X

#面向对象编程的核心，扮演相关数据及逻辑的容器。创建实例的蓝图

'''
class ClassName(base_class[es]):
    "optional documentaion string"
    ststic_member_declasrations
    method_declatations
'''

#可以选择一个父类，如果没用就用object作为父类
#class行之后是可选的文档字符串，静态成员定义，以及方法的定义

class FooClass(object):
    """my very first class:FooClass"""
    version = 0.1 # class (data) attribute 静态变量，边所用实例以及四个方法共享
    #self是实例本身的引用
    def __init__(self,nm='Tim Cooper'):#当一个类被实例创建时候，__init__()会自动执行
        "constructor" # __init__可以被后面覆盖，目的是必要的初始化
        self.name = nm #class instance(data) attribute
        print ('Created a class instance for',nm)

    def showName(self):
        'display instance attribute and class name'
        print ("Your name is",self.name)
        print ("My name is",self.__class__.__name__) #实例化它类的名字
        #self.__class__引用实际的类

    def showver(self):
        'display class(static) attribute'
        print (self.version)


    def addMe2Me(self,x): #does not use 'self'
        'apply + operation to argument'
        return x + x

foo1 = FooClass() #Created a class instance for Tim Cooper __init__被自动调用
foo1.showName()
'''
Your name is Tim Cooper
My name is FooClass
'''
print (foo1.version) #0.1
foo1.showver() #0.1
print (foo1.addMe2Me(5)) #10
print (foo1.addMe2Me('xyz')) #xyzxyz

foo2 = FooClass('Jane Smith') #created a class instance for Jane Smith
foo2.showName()
'''
Your name is Jane Smith
My name is FooClass
'''