#5.9_prac.py

#5-2运算符
def mul(a,b):
    return a*b
result = mul(1,2)
print (result)

"""
#5-3 判断闰年
year = int(input('input year to judge:'))
if year%4 == 0 and year%100 != 0:
    print ('%s year is leap'% year)
elif year%4 ==0 and year%100 == 0:
    print ('%s year is leap'% year)
else:
    print ('%s year is not leap'% year)
"""
#5-11 mod
for i in range(0,21):
    if i%2 == 1:
        print (i)

def mod(a,b):
    if a%b == 0 or b%a == 0:
        return True
    else:return False

#num1 = int(input('input1:'))
#num2 = int(input('input2:'))
#print (mod(num1,num2))


def convert(str):
    a,b = str.split(':')
    a,b = int(a),int(b)
    return a*60+b
time = '1:20'
print ('%s equal %s minutes'%(time,convert(time)))

print ('love\tboy')

#5-16
'''
Amount Remaining
Pymt# Paid Balance
----- ------ ---------
0 $ 0.00 $100.00
1 $16.13 $ 83.87
2 $16.13 $ 67.74
3 $16.13 $ 51.61
4 $16.13 $ 35.48
5 $16.13 $ 19.35
6 $16.13 $ 3.22
7 $ 3.22 $ 0.00
'''

def Payment(init,monpay):
    print ('Amount Paid Balance')
    print ('Pymt#\tPaid\tBalance')
    print ('-----\t'*3)
    s2  = init
    for i in range(8):
        if s2-monpay >= 0:
            s1 = monpay*bool(i)
        else:
            s1 = 0
        s2 -= s1
        print ('%s\t$\t%f\t$\t%f'%(i,round(s1,2),round(s2,2)))


Payment(100,16.139)

import random
L = []
for i in range(random.randint(1,101)):
    L.append(random.uniform(0,231))
re_L = []
for i in L:
    re_L.append(random.choice(L))

re_L  = sorted(L)
print (re_L)