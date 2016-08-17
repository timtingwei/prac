#cxt_3.py

#一个整数，它加上 100 后是一个完全平方数，再加上 168 又是一个完全平方数，请问该数是多少？
from math import sqrt
L = []
"""
for i in range(0,10):
    for j in range(0,10):
        for n in range(0,10):
            for m in range(0,10):
                for x in range(0,10):
                    for y in range(0,10):
                        num = 100000*i + 10000 * j+1000*n +100*m +10*x+y
                        if sqrt(num) == type(1):
                            L.append(num)
"""


if True:
    import math
    for e in range(10000):
        if (int(sqrt(e+100))*int(sqrt(e+100)) == e+100):
            if (int(sqrt(e+268))*int(sqrt(e+268)) == e+268):
                L.append(e)
print (L) #[21, 261, 1581]