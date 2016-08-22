#cxt_26.py

#利用递归方法求5!。
"""
#/// 我的程序
num = 1
def fact(n):
    if n == 1:
        return n
    else:
        return n*fact(n-1)

print (fact(5))
"""
#///源码 
def fact(j):
    sum = j
    if j == 0:
        sum = 1
    else:
        sum = sum * fact(j-1)
    return sum 

for i in range(1,6):
    print ('%s! = %s '%(i,fact(i)))
