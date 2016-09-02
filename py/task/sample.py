#sample.py

from functools import reduce
lst = [i for i in range(0,100) if (i%2!=0)]
strLst = [str(n) for n in lst]
sep = '+'
lst_join = sep.join(strLst)
print ('%s = %f' %(lst_join,sum(lst)))



n = 1
sum = 0
iter =  100
s = ''
while n<iter+1:
    sum = sum + n
    if n == 99:
        s = s+str(n)
    else:
        s = s+str(n)+'+'
    n += 2
print (s,'=',sum)

a = 3
if a==1:
    print ('a=','1')
elif a==2:
    print ('a!=','2')
else:
    print ('a!= 1 or 2')


