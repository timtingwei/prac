#01_tuple_01_py.py

tup = 2,5,6, #建立元组并赋值给变量
print (tup)
#(2, 5, 6)

tupb = (56,) #一个元素也可以建立元组，需要在末尾增加逗号
print (tupb)
#(56,)
print (tupb[0])
#56

num = 56
print (num)
#56

print (3*(20*2,)) #在末尾添加逗号后，可以按照元组的方式运行
#(40, 40, 40)
print (3*tupb)
#(56, 56, 56)

tup2 = tuple([5,8,9]) #使用函数tuple()把list转成tuple
print (tup2)
#(5, 8, 9)

tup3 = tuple((3,5,2)) #使用函数tuple()建立元组，参数可以多变
print (tup3)
#(3, 5, 2)

#///元组项值不可变，可以作为字典的键使用
tupdict = {(0,1):10,(2,3):32}
print (tupdict)
print (tupdict.keys())
#dict_keys([(0, 1), (2, 3)])
print (tupdict[(0,1)])
#10
