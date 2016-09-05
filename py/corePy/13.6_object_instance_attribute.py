#13.6_object_instance_attribute.py

class RoomFareCalcus(object):
    '''Calculate the room fare'''
    def __init__(self,rr,st=0.085,rt=0.1):
        """RoomFareCalcus default arguments:
        sales tax == 8.5% room tax == 10%
        """
        self.roomRate = rr
        self.salesTax = st
        self.roomTax = rt

    def caluAllRate(self,days=1):
        """calculate all room rate;default to daily rate
        days == 1 
        """
        daily = round((self.roomRate  * (1+self.salesTax+self.roomTax)),2)
        return float(days) * daily


def testRoomFareCalcus():
    c = RoomFareCalcus(1000)
    print (c.caluAllRate(4))
    #66360.0
    sfo = RoomFareCalcus(299)
    print (sfo.caluAllRate())
    #4960.41
    print (sfo.caluAllRate(2)) #2-day rate
    #9920.82
    sea = RoomFareCalcus(189,0.086,0.058) #new instance
    print (sea.caluAllRate())
    #3027.02
    print (sea.caluAllRate(4))
    #864.88
    wasWkDay = RoomFareCalcus(169,0.045,0.02)
    wasWkEnd = RoomFareCalcus(119,0.045,0.02)
    aWkFare = wasWkDay.caluAllRate(5) + wasWkEnd.caluAllRate(2)
    print (aWkFare)
    #1153.36

testRoomFareCalcus()

#///__init__应当返回None
class MyClass(object):
    pass
mc = MyClass()
print (mc)
#<__main__.MyClass object at 0x02859170>

#__init__应当返回None,不然出现TypeError,实例对象是自动在实例化调用后才返回的。
class MyClass(object):
    def __init__(self):
        print ('initialized')
        return 1
mc = MyClass()
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.6_object_instance_attribute.py", line 54, in <module>
    mc = MyClass()
TypeError: __init__() should return None, not 'int'
"""