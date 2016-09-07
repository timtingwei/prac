#animals_inherit.py

class Animal(object):
    def run(self):
        print ('Animal is running..')

class Dog(Animal):
    pass

class Cat(Animal):
    pass
    

#///子类拥有了父类的全部功能

dog = Dog()
dog.run()
#Animal is running..

cat = Cat()
cat.run()
#Animal is running..

class Animal(object):
    def run(self):
        print ('Animal is running..')

class Dog(Animal):
    
    def run(self): #///可以对子类进行修改，子类和父类相同的属性和方法会覆盖父类的方法和属性
        print ('Dog is running...')
    
    def eat(self):
        print ('Eating meat')

class Cat(Animal):
    
    def run(self):
        print ('Cat is running...')

dog = Dog()
dog.run()
#Dog is running...

cat = Cat()
cat.run()
#Cat is running...


#多态，是继承的另外的一个好处

#定义一个class的时候，实际上定义了一种数据类型。定义的数据类型和python自带的数据类型没什么两样

a = list()
b = Animal()
c = Dog()

print (isinstance(a,list))
#True
print (isinstance(b,Animal))
#True
print (isinstance(c,Dog))
#True

print (isinstance(c,Animal)) #///在继承关系中，如果一个实例的数据类型是某个子类，那么它的数据类型也可以被看作是父类。反过来就不行
#True

print (type(c))
#<class '__main__.Dog'>

#多态另外的好处
def run_twice(animal):
    animal.run()
    animal.run()

run_twice(Animal())
#Animal is running..
#Animal is running..

class Tortoise(Animal):
    def run(self):
        print ('Tortoise is running slowly...')

run_twice(Tortoise()) #///在传入的时候，只要是Animal类型就行，不必对函数进行修改
#Tortoise is running slowly...
#Tortoise is running slowly...

#多态的威力：调用方法只管调用不管细节。
#///对于一个变量，我们只需要知道它是Animal类型，不需确切的知道它的类型，就可以放心的去调用run()方法，而具体的run()作用在哪个对象上，由运行时确切的类型决定


#开闭原则
#对扩展开放：允许新增Animal子类；
#对修改封闭：不需要修改依赖Animal类型的run_twice()等函数

#动态语言的好处,鸭子类型：看起来像鸭子（类型）,走路起来像鸭子（方法），就能被看作是鸭子
#不局限于类型，只要有run方法就行
class Timer(object):
    def run(self):
        print ('Start...')

run_twice(Timer())
#Start...
#Start...