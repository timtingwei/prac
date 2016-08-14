#cxt_13.py

#///打印水仙花数，各位数立方和等于该数
def IsFlowerNum(n):
    if (n<100) or (n>999):
        raise ValueError("请输入三位数！")
    a = n%10
    b = (n//10)%10
    c = n//100
    if a**3+b**3+c**3 == n:
        return True
    else:
        return False
    
print (IsFlowerNum(201))
#///输出1000以内的水仙花数
k = 0
for i in range(100,1000):
    if IsFlowerNum(i):
        print ("%d flowernumber is  =  %d"%(k,i))
        k+=1

"""
n = 200
if (n<100) or (n>999):
        raise ValueError("请输入三位数！")
L = []
a = n%10
b = (n//10)%10
c = n//100
L.append((a,b,c))
print (L)
"""