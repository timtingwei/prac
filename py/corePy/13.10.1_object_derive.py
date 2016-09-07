#13.10.1_object_derive.py


#创建子类
#如果你的类没有从任何祖先类派生，用object作为父类的名字。

#经典类没有从祖先类派生，没有圆括号
class ClassicClassWithoutSuperclasses:
    pass

class Parent(object):
    def parentMethod(self):
        print ('calling parent method')

class Child(Parent):
    def childMethod(self):
        print ('calling child method')

p = Parent() 
p.parentMethod()
#calling parent method

c = Child()
c.childMethod()
#calling child method
c.parentMethod()
#calling parent method