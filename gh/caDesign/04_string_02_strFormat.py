#04_string_02_strFormat.py

#建立一种字符串模式,%来实现，%s称为转化说明符
formatStr = "Hello,%s and %s!" #通过%建立格式化字符串格式
values = ("Python","Grasshopper") #常使用元组放置希望格式化的值
newStr = formatStr % values
print (newStr)
#Hello,Python and Grasshopper!

#///格式化带有精度浮点数%.2f,%%双百分号代表了字符串中本身就有%
formatStr  = "Pi with three decimals:%.3f,and enter a value with percent sign:%.2f %%"
from math import pi 
newStr = formatStr % (pi,3.1415926) #使用格式化值来格式化字符串模式
print (newStr)
#Pi with three decimals:3.142,and enter a value with percent sign:3.14 %

formatStr = "%10f,%10.2f,%.2f,%.5s,%.*s,$%d,%x,%f"
#%10f代表字段宽为10的十进制浮点数
#%10.2f 代表字段宽为10，精度为2的十进制浮点数
#%.2f 代表精度为2的十进制浮点数
#%.5s 宽度为5的字符串
#%.*s 从值元组中读取指定宽度的字符串
# $%d 代表带符号的十进制整数
#%x 代表不带符号的十六进制
#%fn 代表十进制浮点数

newStr = formatStr%(pi,pi,pi,"Hello Python!",5,"Hello Python",52,52,pi)
print (newStr)
#  3.141593,      3.14,3.14,Hello,Hello,$52,34,3.141593

formatStr = "%010.2f,%-10.2f,%+5d,%+5d"
#%010.2f 代表字符宽度为10并用0进行填充空位
#%-10.2f 代表最对齐二右侧多出空格
#%+5d不管是整数还是负数都标出符号
newStr = formatStr % (pi,pi,10,-10)
print (newStr)
#0000003.14,3.14      ,  +10,  -10

#string模块提供的另外一种格式化字符串的方法,Template()模板字符串，substitute()方法格式化字符串达到字符串格式化的目地
from string import Template
s = Template("$x,glorious $x!")
newStr = s.substitute(x = "Python")
print (newStr)
#Python,glorious Python!

s=Template("${x}thon is amazing!") #替换单词的一部分时，需要使用大括号{}括起
newStr = s.substitute(x='py')
print (newStr)
#python is amazing!

s = Template("$x and $y are both amazing!") #定义多个需要替换的字符串
d = dict([('x','Python'),('y','Grasshopper')])
print (d)
newStr = s.substitute(d) #使用字典格式化模板字符串
print (newStr)
#Python and Grasshopper are both amazing!