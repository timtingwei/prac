
#3.1
#用;能够多个语句写在同一行
print ("i want go to aa");print ("yes i can")

import sys;x = 'foo';sys.stdout.write(x+'\n')

#变量赋值
#在赋值时，都是奖该对象的引用赋值给变量
anInt = -12
aString = 'cart'
aFloat = -3.1415 * (5.0 ** 2)
anotherString = 'shop' + 'ping'
aList = [3.14e10, '2nd elmt of a list',8.82-4.371j]
print (aList)

x = 0
y = x = x +1
x +=1
y *=3 #same y = y*3
y -=1 #same as y = y - 1
y /=2 #same as y = y / 2
x **=2 #same as x = x ** 2
a = 4
a <<= 3
print (a)
print (x,y)

m = 12
m %= 7
print (m)
m **= 2
print (m)
aList = [123,'xyz']
aList += [45.6e7] #10 的7次方
print (aList)

#多元赋值两边都是元组 mul-tuple 赋值方法
(x,y,z) = (1, 2, 'a string') #tuple用括号括起来，有可读性
print (x)

#C语言中两个变量的交换
temp = x
x = y
y = temp

#python中的交换
x,y = 1,2
print (x);print (y)
x,y = y,x
print (x);print (y)

'''
_xxx 不能在模块或类外使用
___xxx___ 系统定义名字
_xxx 类中的私有变量名
'''

#print (sys.__doc__)

import this
print (this.i)



