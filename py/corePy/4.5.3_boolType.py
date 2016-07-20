#boolType.py

#not > (and ,or) 只比所有比较运算符低一级

x,y = 3.141592626536,-1024
print (x<5.0) #True

print (not (x < 5.0)) #False
print ((x < 5.0) or (y > 2.718281828)) #True
print ((x <5.0) and (y > 2.718281828)) #False

print (3<4<7) #same as (3 < 4) and (4 < 7)