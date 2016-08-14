#cxt_12.py

#判断101-200之间有多少素数，并输出所有的素数



import sys
import math
def IsPrim(n):
    if n == 2:
        return True
    m = int(math.sqrt(n))
    for i in (3,m):
        if n % i ==0:
            return False
    return True

if __name__ == '__main__':
    nums = []
    for e in range(100,201):
        if IsPrim(e):
            nums.append(e)

print (nums)
#print (IsPrim(4))
