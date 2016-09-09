#13.13.2_object_Time60.py

#用来操作时间，精确到小时和分

class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min

print (dir(Time60))
#['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__']

#需要通过实例直接输出的话，需要覆盖__str__甚至__repr__
#4:30 
class Time60(object):
    def __init__(self,hr,min):
        self.hr = hr
        self.min = min
    
    def __str__(self):
        #return '%s : %s'%(self.hr,self.min)
        return '%d : %d'%(self.hr,self.min)
t = Time60(4,30)
print (t)
mon = Time60(10,30)
tue = Time60(11,15)
print (mon,tue)
#10 : 30 11 : 15