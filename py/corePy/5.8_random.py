#random.py

import random

a = random.randrange(0,10,1)
print (a) #在区间内随机返回一个数


b = random.uniform(1,10)
print (b) #在(1,10)内返回一个浮点数

c = random.randint(1,10)
print (c) #3 (1,10)内返回一个整数

d = random.random()
print (d) #回返一个(0,1)内的浮点数

e = random.choice([1,3,4])
print (e) #在序列中随机返回

