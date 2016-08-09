#stringOpreation.py

#6-2 字符串
aString = 'Hello World!' #使用单引号
anotherString = "Pyhton is cool!" #使用双引号
print (aString) #Hello World!
print (anotherString) #Pyhton is cool!
s = str(range(4))
print (s) #range(0,4)
L = []
for i,value in enumerate(s):
    L.append([i,value])

print (L) #[[0, 'r'], [1, 'a'], [2, 'n'], [3, 'g'], [4, 'e'], [5, '('], [6, '0'], [7, ','], [8, ' '], [9, '4'], [10, ')']]

#如何访问字符串的值（字符和子串）
aString = 'Hello World!'
print (aString[0]) #H
print (aString[1:5]) #ello
print (aString[6:]) #World!

#创建一个新的串的方式来引用
aString = aString[:6] + 'Python!'
print (aString) #Hello Python!
aString = 'different string altogeter'
print (aString) #different string altogeter

#删除字符串 通过赋值一个空字符串或者使用del语句删除
aString = 'Hello World !'
aString = aString[:3] + aString[4:]
print (aString) #Helo World !

aString = ''
print (aString)
del aString

#比较操作的是时候按照ASCII值的大小进行比较。
str1 = 'abc'
str2 = 'lmn'
str3 = 'xyz'
print (str1 < str2) #True
print (str2 != str3) #True


#6.3.2_序列操作符 切片([] 和 [:])分别对应单一和范围
#正向索引 反向索引 默认索引
aString = 'abcd'
print (len(aString)) #4

# x 是[start:end]中的一个索引值,那么有:start <= x <end
print (aString[0]) #a
print (aString[1:3]) #bc
print (aString[2:4]) #cd 实际上返回的是索引2和3的值
#print (aString[4]) #单个索引的时候不能够超出范围

print (aString[-1]) #d
print (aString[-3:-1]) #bc 范围切片的时候end-1
print (aString[-4]) #a

#如果开始索引和结束索引没有被指定，分别以第一个和最后一个为默认值
print (aString[2:]) #cd
print (aString[1:]) #bcd
print (aString[:-1]) #abc
print (aString[:]) #abcd


#成员操作符号
print ('b' in 'abcd') #True
print ('n' in 'abcd') #False
print ('nm' not in 'abcd') #True

#运行时候字符串连接
print ('Spanish'+'Inquistion')
print ('Spanish'+' '+'Inquisition')
s = 'Spanish'+' '+'Inquistion'+'Made easy'
print (s) #Spanish InquistionMade easy

import string
print ((s[:3] + s[20]).upper)

print ('%s %s'%('Spanish','Inquistion')) #Spanish Inquistion
s = ' '.join(('Spanish','Inquisition','Made Easy'))
print (s) #字符串通过join连接起来 list通过extend

print ('aaa'.upper)
#import urllib
#f = urllib.url('http://'#protocol
 #   'localhost'#hostname
  #  ':8000'#port
   # '/cgi-bin/friend2.py')#file

print ('Hello'+u''+'World'+u'!') #Unicode字符串

print ('Ni!' * 3) #Ni!Ni!Ni!
print ('*'*40) #****************************************

print ('-'*20,'Hello World','-'*20)
#-------------------- Hello World --------------------
who = 'knights'
print (who * 2)#knightsknights
print (who) #knights
#原变量是不会被修改的

