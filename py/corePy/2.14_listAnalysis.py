#listAnalysis.py

squared = [x ** 2 for x in range(4)]
for i in squared :
    print (i),

sqdEvens = [x ** 2 for x in range(8) if not x%2] #same as x%2==1
print (sqdEvens) #[0, 4, 16, 36]
for i in sqdEvens:
    print (i)

sqdEvens1 = list(map((lambda x:x ** 2),range(8)))
print (sqdEvens1) #[0, 1, 4, 9, 16, 25, 36, 49]

#一对多
L = list(x + y for x in range(4) for y in [10,20])
print (L) #[10, 20, 11, 21, 12, 22, 13, 23]

num1 = 2
num2 = [1,2,3,4,5]
add = num1 + num2
print (add) #WRONG


num1 = 2
num2 = [1,2,3,4,5]
for i in num2:
    add = num1+i
    print (add)
