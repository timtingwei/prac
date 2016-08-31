#mit_lec03.py

x = 64
answer = 0
while answer*answer <= x:
    answer += 1
    if answer*answer == x:
        print (answer)
        break

#///源码
x = 64
ans = 0
while ans*ans < x:
    ans += 1
print (ans)

x = 1515361
ans = 0
if x >= 0:
    while ans*ans < x:
        ans = ans +1
        #print ('ans=',ans)
    if ans*ans != x:
        print (x,'不是完全平方数')
    else:print (ans)
else:
    print (x,'是负数')

