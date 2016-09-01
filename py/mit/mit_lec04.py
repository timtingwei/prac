#mit_lec04.py

x = 16 
ans = 0
if x >= 0:
    while ans*ans < x :
        ans = ans + 1
        print ('ans = ',ans)
    if ans*ans != x:
        print (x,'is not a perfect square.')
    else:print (x,'is a perfect square')
else:print (x,'is a nagative number')

def sqrt(x):
    """Returns the  squart root of x ,if x is a perfect square 
    Print an error message and returns None otherwise"""
    ans = 0 #///local bingding do not affect global bingding
    if x >= 0 :
        while ans*ans < x:
            ans += 1
            print ('ans = ',ans)
        if ans * ans != x:
            print (x,'is not a prefect square')
            return None
        else:
            print (x,'is a perfect square')
            return ans
    else:
        print (x,'is a nagative number')
        return None

sqrt(5)
sqrt(16)

def f(x):
    return x + 1
x = 3
z = f(4)
print (z)
#5
print (x)
#3

test = sqrt(34)
print (test)
#None
print (test == None)
#True
print (help(sqrt))
"""
sqrt(x)
    Returns the  squart root of x ,if x is a perfect square 
    Print an error message and returns None otherwise
None
"""

#20 head ,56 legs
# x pigs ,y chickens
x = 0
while x<20:
    y = 20 - x
    if (x*4+y*2) == 56:
        print ('pig = %d,chicken = %d'%(x,y))
    x = x+1

def p2c(heads,legs):
    solution = []
    solutionFound = False
    for x in range(heads+1):
        for z in range(heads+1-x):
            y = 20 - x - z
            if (x*4+y*2+z*8 == legs):
                print ('pigs count is',x)
                print ('chickens count is',y)
                print ('spiders count is',z)
                solution.append((x,y,z))
                solutionFound = True
    if not solutionFound :print ("There is no solution") 
    return solution


print (p2c(20,56)) 
#[(8, 12)]

def isPalindrome(s):
    """Returns True if s ia a palindrome and False otherwise
    """
    if len(s) <=1 :return True #///base case
    return  s[0] == s[-1] and (isPalindrome(s[1:-1]))


print (isPalindrome('1234'))
#False
print (isPalindrome('12321'))
#True
"""
Fibonacci:
    Pairs(0) = 1
    Pairs(1) = 1
    Paris(n) = Pairs(n-1) + Pairs(n-2)
"""
def fib(n):
    if n == 0 or n == 1:return 1
    else: return fib(n-1) + fib(n-2)

L = []
for i in range(21):
    L.append(fib(i))
print (L)