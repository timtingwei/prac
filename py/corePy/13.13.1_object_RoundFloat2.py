#13.13.1_object_RoundFloat2.py

#定制类

class RoundFloatManul(object):
    def __init__(self,val):
        assert isinstance(val,float),"Value must be a float"
        self.value = round(val,2)

#rfm = RoundFloatManul(42)
"""
Traceback (most recent call last):
  File "e:\tim\prac\py\corePy\13.13.1_object_RoundFloat2.py", line 8, in <module>
    rfm = RoundFloatManul(42)
  File "e:\tim\prac\py\corePy\13.13.1_object_RoundFloat2.py", line 5, in __init__
    assert isinstance(val,float),"Value must be a float"
AssertionError: Value must be a float
"""

rfm = RoundFloatManul(4.2)
print (rfm)
#<__main__.RoundFloatManul object at 0x02931A90>
print (rfm.value)
#4.2
#///MODO: print 实际上是想看到有意义的东西，而不是 字符串对象。就要去__str__,__repr__()两者之一

def __str__(self):
    return self.value

class RoundFloatManul(object):
    def __init__(self,val):
        assert isinstance(val,float),"Value must be a float"
        self.value = round(val,2)
    
    def __str__(self):
        #return self.value
        #TypeError: __str__ returned non-string (type float)
        return str(self.value)

rfm = RoundFloatManul(4.2)
print (rfm)
#4.2
rfm = RoundFloatManul(5.3522123)
print (rfm)
#5.35
rfm = RoundFloatManul(5.5964)
print (rfm)
#5.6

#///更加巧妙的方法
class RoundFloatManul(object):
    def __init__(self,val):
        assert isinstance(val,float),"Value must be a float"
        self.value = round(val,2)
    
    def __str__(self):
        #return self.value
        #TypeError: __str__ returned non-string (type float)
        return '%.2f'%(self.value)

    __repr__ = __str__  #///引用同一对象，防止bug传递

rfm = RoundFloatManul(5.5964)
print (rfm)
#5.60

print (round(5.5964,2))
#5.6
print ('%.2f'%5.5964)
#5.60
