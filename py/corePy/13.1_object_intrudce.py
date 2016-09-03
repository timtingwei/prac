#13.1_object_intrudce.py

#/// instance and class
class MyData(object):
    """"
    def __init__(self):
        self.x = 10
        self.y = 20
    """
    pass

mathObj = MyData()
mathObj.x = 4 #/// x是实例特有的属性，不是类的属性，是动态的
mathObj.y = 5
print (mathObj.x + mathObj.y)
#9
print (mathObj.x * mathObj.y)
#20

#/// method
class MyDataWithMethod(object): #定义类和方法
    def printFoo(self):
        print ('You invoked printFoo()!')

myObj = MyDataWithMethod() #创建实例
myObj.printFoo() #调用方法
#You invoked printFoo()!

#create a class

class AddrBookEntry(object):
    'address book entry class'
    def __init__(self,nm,ph): #///在实例化的时候被调用
        self.name = nm
        self.phone = ph
        print ('Created instance for:',self.name) #打印出介绍,self被实例名替换
    def updatePhone(self,newph):
        self.phone = newph
        print ('Updated phone # for: ',self.name)

#create instance
john = AddrBookEntry('John Doe','408-555-1212')
#Created instance for: John Doe
jane = AddrBookEntry('Jane Doe','650-555-1212')
#Created instance for: Jane Doe

print (john)
#<__main__.AddrBookEntry object at 0x028531D0>
print (john.name) #打印实例的名字
#John Doe
print (john.phone)
#408-555-1212
print (jane.name)
#Jane Doe
print (jane.phone)    
#650-555-1212

#call method
john.updatePhone('415-555-1212')
#Updated phone # for:  John Doe
print (john.phone)
#415-555-1212

#create subclass
class EmplAddrBookEntry(AddrBookEntry):
    'Employee Address Book Entry class'
    def __init__(self,nm,ph,id,em):
        AddrBookEntry.__init__(self,nm,ph) #super().__init__(self)
        self.empid = id
        self.email = em
    
    def updateEmail(self,newem):
        self.email = newem
        print ('Updated e-mail address for:',self.name)

john = EmplAddrBookEntry('John Doe','408-555-1212',42,'jogh@hotmail.com')
#Created instance for: John Doe
print (john)
#<__main__.EmplAddrBookEntry object at 0x02883490>
print (john.name) #John Doe
print (john.phone) #408-555-1212
print (john.email) #jogh@hotmail.com
john.updatePhone('415-555-1212') #Updated phone # for:  John Doe
print (john.phone) #415-555-1212
john.updateEmail('john@doe.spam') #Updated e-mail address for: John Doe
print (john.email) #john@doe.spam