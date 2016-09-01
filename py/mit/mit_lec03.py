###mit_lec03.py
##
##x = 64
##answer = 0
##while answer*answer <= x:
##    answer += 1
##    if answer*answer == x:
##        print (answer)
##        break
##
###///源码
##x = 64
##ans = 0
##while ans*ans < x:
##    ans += 1
##print (ans)
##
##x = 1515361
##ans = 0
##if x >= 0: 
##    while ans*ans < x:
##        ans = ans +1
##        #print ('ans=',ans)
##    if ans*ans != x:
##        print (x,'不是完全平方数')
##    else:print (ans)
##else:
##    print (x,'是负数')
##
##
##x = 10
##for i in range(1,x):
##    if x%i == 0:
##        print ('divisor',i)
###>>> 
###divisor 1
###divisor 2
###divisor 5
##
##x = 10
##i = 1
##while i < x:
##    if x%i == 0:
##        print ('divisor',i)
##    i += 1
##
##x = 100
##divisors = ()
##for i in range(1,x):
##    if x%i == 0:
##        divisors = divisors + (i,)
##print (divisors)
##
##s1 = 'abcdefg'
##s2 = 'hijklmn'

sumDigits = 0
for c in str(1952):
    sumDigits += int(c)
print (sumDigits)
#17
