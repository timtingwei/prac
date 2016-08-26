#05_syntax_02_if_is.py

x = y = [3,6,9]
z = [3,6,9]
print (x == y)
#True
print (x is y) #是否指向同一对象
#True
print (x==z) #x是否等于x,z
#True
print (x is z) #x,z是否指向同一对象
#False
print (x is not y)
#False
print (x is not z)
#True
del x[2] #删除x列表中索引值为2的项值
print (x)
#[3, 6]
print (y) #因为x,y指向同一数值，所以x值发生改变后y值也发生改变
#[3, 6]
print (z)
#[3, 6, 9]

#///成员资格运算符, in /not in 
x = [3,6,9]
print (3 in x)
#True
print (0 in x)
#False
print (3 not in x )
#False
print (0 not in x)
