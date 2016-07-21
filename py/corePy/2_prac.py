#

#while
n = 0
while n<11:
    print (n)
    n +=1
print ('end')

#range()
for i in range(11):
    print (i)
print ('end')

#2-8
i = 0
str = 'Tim'
while i< len(str):
    print(str[i])
    i+=1

L = []
for i,value in enumerate(str):
    listi = (i+1,value)
    L.append(listi)
print (L)
#print(help(enumerate))

#2-9
L = [1.2,2,3,4,5.2]
def div(list):
    sum = 0
    for i in list:
        sum = sum + i
    return sum /len(L)
print (div(L))

#2-11
class SumOrArv:
    def __init__(self,list):
        self.l = list
    def sum(self):
        self.sum = 0
        for i in self.l:
            self.sum = self.sum +i
        return self.sum
    def average(self):
        return self.sum / len(self.l)

L = [1,2,3,4,5]
s = SumOrArv(L)
a = s.sum() #15
b = s.average() #3.0
def choice(a,b):
    x = input('sum or average')

    if x == 'sum':
            print (a)
    elif x=='average':
            print (b)#3.0
    else:
        raise TypeError('input wrong')

choice(a,b)

