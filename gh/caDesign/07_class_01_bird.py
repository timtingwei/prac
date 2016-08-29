#07_class_01_bird.py

class Bird: #定义一般鸟类的属性与方法
    fly='Whirring' #定义一般鸟类飞的属性
    def __init__(self): #调用__init__构造函数，初始化对象的各个属性。
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