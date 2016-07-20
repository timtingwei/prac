#input.py

#标准输入
user = input('Enter login name:')
print ('Enter login name:',user)
print (type(user))
'''
Enter login name:1
Enter login name: 1
<class 'str'>
'''
#直接的input只能用于文本输入

#将 数值字符串 转换成 整数
num = input('Now enter a number:')
print (num)
print ('Doubling your number:%d' % (int(num) * 2))
print(type(num),type(int(num)))
'''
1024
Doubling your number:2048
<class 'str'> <class 'int'>
'''

#生疏的函数使用help() 函数名为参数
print(help(input))
'''
input(...)
    input([prompt]) -> string
'''