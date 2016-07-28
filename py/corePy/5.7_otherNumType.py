#otherNumType.py

#值为零的任何数字或者空集（list,tuple,dictionary）布尔值是False
print(bool([]))
print(bool(0))

#布尔值对应1,0
print(int(True)) #1
print(int(False)) #0

print (bool(True))

#使用布尔数
foo = 42
bar = foo < 100#比较得到bool值
print (bar) #True
print (bar+100) #101
print ('%s'%bar) #True
print ('%d'%bar) #1

#无__nonzero__()
class C:pass
c = C()

print (bool(c)) #True
print (bool(C)) #True
print ('-'*5)

#重载__nonzero__() 使它返回False
class C:
    def __nonzero__(self):
        return False

c = C()
print (bool(c)) #True
print (bool(C)) #True


