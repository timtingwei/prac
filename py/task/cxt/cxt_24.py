#cxt_24.py

#有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

#method0:
sum = 0.0
a = 1.0
b = 2.0
for i in range(20):
    num = b/a
    a,b= b,a+b
    sum +=num    
print ('sum = %f'%sum)

#method1:
from functools import reduce
sum = 0.0
a = 1.0
b = 2.0
nums = []
for i in range(20):
    num = b/a
    a,b = b,a+b
    nums.append(num)

sum = reduce(lambda x,y:x+y,nums)
print ('sum = %f'%sum)