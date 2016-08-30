#07_class_01_bird.py
"""
class Bird: #定义一般鸟类的属性与方法
    fly='Whirring' #定义一般鸟类飞的属性
    def __init__(self): #调用__init__构造函数，初始化对象的各个属性。 #///类在引用时，就被赋予
    #///类的各属性都可以在构造函数中定义
    #///每一个类的方法的第一个参数(self)，包括__init__，总是指向类的当前实例的一个引用。
    #///self是一个既定的习惯
        self.hungry = True #舒适话变量hungry的属性为Ture,把类实例化后执行

    def eat(self):#通过定义函数构建类的方法，鸟类都具有吃得方法，self被指向该方法被调用的对象，实例。
        if self.hungry:
            print ('Aaaah...')
            self.hungry = False #执行完毕之后打印，更改为False，鸟已经吃过食物
        else:
            print ('No,Thanks!')

class Apodidae(Bird): #定义鸟类的子类雨燕的属性和方法，因为是子类，除了自身的属性和方法外，也包括一般鸟类的属性和方法。
    def __init__(self):
        super(Apodidae,self).__init__() #可以避免子类初始化构造方法重写父类的初始化构造方法，使引用的实例不具有超类的初始化方法，即self.hungry = True
        self.sound = 'Squawk!'
    def sing(self):
        print (self.sound)

swift = Apodidae() #通过赋值的方法，swift为雨燕的一个实例对象
print (swift.fly) #实例小雨燕具有一般鸟类的属性，飞的特征
#Whirring 
swift.eat()
#Aaaah...
swift.eat()
#No,Thanks!
swift.sing()
#Squawk!

blackswift = Apodidae() #捆绑实例黑雨燕
scarceswift = Apodidae() #捆绑实例珍雨燕
blackswift.sing()
#Squawk!
scarceswift.sing()
#Squawk!

#///类定义时，class语句中的代码都在特殊的命名空间中被执行，即类命名的空间(classnamespace),这个命名空间的可以由类内的所有的成员访问
#///实例的属性可以重新赋予，但是不会影响捆绑该类的其他属性
print (blackswift.fly)
#Whirring
blackswift.fly = 'humming' #重新赋值属性
print (blackswift.fly)
#humming
print (scarceswift.fly) #///不会影响其他绑定成员的属性
#Whirring 

#///重新定义blackswift的类
blackswift = Bird() #成为一般鸟类的一员，不再是雨燕的一员
print (blackswift.hungry)
#True
blackswift.eat()
#Aaaah...
blackswift.eat()
#No,Thanks!
#blackswift.sing()

Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\07_class_01_bird.py", line 60, in <module>
    blackswift.sing()
AttributeError: 'Bird' object has no attribute 'sing'
"""

class Bird:
    'General properties and method of birds'
    fly = 'Whirring'
    def __init__(self):
        self.hungry = True
    
    def eat(self):
        if self.hungry:
            print ('Aaaah...')
            self.hungry = False
        else:
            print ('No,Thanks!')

class Apodidae(Bird):
    def __init__(self):
        #super(Apodidae,self).__init__() ///使用super()函数防止超类的初始化构造方法
        Bird.__init__(self) #///也可以用父类.__init__(self)替代super函数，但是super(Apodidae,self)
        self.sound= 'Squawk!'
    def sing(self):
        print (self.sound)

blackswift = Apodidae()
blackswift.eat()
"""
Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\07_class_01_bird.py", line 89, in <module>
    blackswift.eat()
  File "e:\tim\prac\gh\caDesign\07_class_01_bird.py", line 75, in eat
    if self.hungry:
AttributeError: 'Apodidae' object has no attribute 'hungry'
"""

