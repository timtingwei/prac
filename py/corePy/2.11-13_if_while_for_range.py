#if_while_for_range.py

#If ---> 8.X
'''
if expression:
    if_suite
elif expression2:
    elif_suite
else :
    else_suite

如果表达式的值非0或者为布尔值True,代码组if_suite被执行，否则，执行下一条
'''
x = -1
if x <.0:
    print ('"x" must be atleast 0 !')

#While
'''
while expression:
    while_suite
是if的变体,while_suite会被连续不断的循环执行，知道表达式的值变为0orFalse
接着python会执行下一句代码
'''

counter = 0
while counter < 3:
    print ('loop #%d' % counter)
    counter +=1
'''
loop #0
loop #1
loop #2
'''

print ('I like to use the Internet for: ')
for item in ['e-mail','net-surfing','homework','chat']:
    print (item)
    #print
'''
I like to use the Internet for:
e-mail
net-surfing
homework
chat
'''

who = 'knights'
what = 'Ni!'
print ('We are the',who,'who say',what,what,what)

for eachNum in [0,1,2]:
    print (eachNum)
'''
0
1
2
'''

#range()接受一个数值范围，生成一个列表。
for eachNum in range(3):
    print (eachNum)
'''
0
1
2
'''

foo = 'abc'
for c in foo:
    print(c)
'''
a
b
c
'''

foo = 'abc'
for i in range(len(foo)): #循环索引
    print (foo[i],'( %d )'% i)
'''
a ( 0)
b ( 1)
c ( 2)
'''

for each in foo: #循环元素
    print (each,'( %d )' % foo.index(each))
'''
a ( 0)
b ( 1)
c ( 2)
'''

#存在一个约束就是 要么循环索引，要么循环元素

#enumerate()函数
for i,ch in enumerate(foo):
    print (ch,'( %d )'% i)
'''
a ( 0 )
b ( 1 )
c ( 2 )
'''


