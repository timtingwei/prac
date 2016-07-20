#operator.py

#标准算术运算  4.5章
# + - * / // % **
# / 传统除法  两个都是整数的话，地板出（取比商小的最大整数）
# // 浮点除法 对结果四舍五入
# ** 乘方
print (5/3) #1.6666666666666667
print (5//3) #1
print (-2 * 4 + 3 ** 2) #1

#比较运算符
#  < <= > >= == !=
#返回bool
# <>已经淘汰

print (2 < 4) #True
print (2 == 4) #False
print (2 > 4 ) #False
print (6.2 <= 6) #False
print (6.2 <= 6.2) #True
print (5 != 5) #False
#print (5 <> 5)  wrong

#逻辑运算符 4.5
# and or not
print (2 < 4 and 2==4)#False 只要有false就是f
print (2 > 4 or 2 < 4)#True  只要有True返回T
print (not 6.2 <=6 )#True
print (3<4<5) #True 相当于接了and
print (3 < 4 and 4 < 5 )#True

#is 标识运算符，比较的是id值 --->4.5.2

