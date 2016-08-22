#cxt_25.py

#求1+2!+3!+...+20!的和。

from functools import reduce

iteration = 20
nums = []
for i in range(1,iteration+1):
    time = i
    num = 1
    while time>0:
        num = num * time
        time -= 1
    nums.append(num)

sum = reduce(lambda x,y:x+y,nums)
print ('1 + 2 + 3 + ... + %s = %d'%(iteration,sum))