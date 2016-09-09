#13.11.4_object_multiple_inheritance.py

class P1(object): #parent class 1
    def foo(self):
        print ('called P1-foo()')
    
class P2(object): #parent class 2
    def foo(self):
        print ('called P2-foo()')
    def bar(self):
        print ('called P2-bar()')

class C1(P1,P2): #child 1 der.from P1,P2
    pass 

class C2(P1,P2):
    def bar(self):
        print ('called C2-bar()')

class GC(C1,C2): #define grandchild class 
    pass 

#///旧式类的访问方法，现在当前类GC中查找，然后向上找最亲的类，深度优先
gc = GC()
gc.foo()  #GC ==> C1 ==> P1
#called P1-foo()
gc.bar() #GC ==> C1 ==> P1 ==> P2     
#called P2-bar()
#///C2.bar()根本不会被搜索,如果要先调用C2.bar()方法的话，经典类需要用绑定实例的方法
C2.bar(gc)
#called C2-bar()


#///新式类，先查找同胞兄弟，广度优先
gc = GC()
gc.foo() #GC ==> C1 ==> C2 ==> P1
#called P1-foo()
gc.bar() #GC ==> C1 ==> C2
#called C2-bar()
#///需要继续向上查找的话，用绑定实例的方法
P2.bar(gc)
#called P2-bar()

#新式类用__mro__属性，获得查找的顺序
print (GC.__mro__)
#(<class '__main__.GC'>, <class '__main__.C1'>, <class '__main__.C2'>, <class '__main__.P1'>, <class '__main__.P2'>, <class 'object'>)    #MODO：可以是同胞，广度优先


#经典MRO的失败

#旧式类
class B:
    pass

class C:
    def __init__(self):
        print ('default the constructor')

class D(B, C):
    pass

d = D()
#default the constructor

#新式类
class B(object):
    pass

class C(object):
    def __init__(self):
        print ('default the constructor')

class D(B, C):
    pass

d = D()#default the constructor
print (D.__mro__)
#(<class '__main__.D'>, <class '__main__.B'>, <class '__main__.C'>, <class 'object'>) #MODO： 由于出现了基类，继承关系成为一个菱形

