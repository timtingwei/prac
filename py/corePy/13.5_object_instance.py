#13.5_object_instance.py

#13.5.1 通过调用类对象来创建实例

class MyClass(object):
    pass

mc = MyClass()

print (type(mc)) #mc是MyClass类的一个实例
#<class '__main__.MyClass'>
print (type(1)) #1是int类的一个实例
#<class 'int'>
print (type(1.0)) #1.0是float类的一个实例

print (type(MyClass)) #MyClass是Type类的一个实例
#<class 'type'>
print (type(int)) #int()是工厂函数 
#<class 'type'>

print (type(abs)) #abs()内建函数
#<class 'builtin_function_or_method'>

#MODO：工厂函数就是指这些内建函数都是类的对象，当调用的时候，实际上是创建了一个类的实例

class MyClass(object):
    x = 5
    z = 10
    def __init__(self):
        self.x = 5 #///原先的x变量被覆盖
        self.y = 20
    def myFunction():
        pass

mc = MyClass()
print (mc.x)
#5
print (mc.y)
#20 
print (mc.z)
#10
print (type(mc.x))
#<class 'int'>
print (type(mc.z))
#<class 'int'> 
print (type(mc.myFunction))
#<class 'method'>
print (mc.myFunction.__module__)
#__main__

#__del__() 解构器
class P():
    def __del__(self):
        pass


class C(P):
    def __init__(self): #construction
        print ('initialized')
    #def __del__(self): #destructor
        #P.__del__(self) #call parent destructor print 'deleted'
        #print ('deleted')

c1 = C() #实例初始化
#initialized
c2 = c1 #创建另外一个别名
c3 = c1 #再创建另外第三个别名
#print (id(c1),id(c2),id(c3)) #打印同一对象的所有引用
"""
class InstCt(object):
    count = 0
    def __init__(self):
        self.count += 1
    def __del__(self):
        #self.count -= 1
    def howmany(self):
        return (self.count)

a = InstCt()
b = InstCt()
print (a.howmany())
#1
print (b.howmany())
#1
"""
class InstCt(object):
    count = 0
    def __init__(self):
        InstCt.count += 1
    def __del__(self):
        InstCt.count -= 1
    def howmany(self):
        return InstCt.count


a = InstCt()
b = InstCt()
#print (InstCt.howmany())
print (b.howmany())
#2
print (a.howmany())

