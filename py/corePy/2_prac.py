#2-prac.py
'''
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
'''

#2-13
import sys
print (dir(sys))
print (sys.version) #3.3.1 (v3.3.1:d9893d13c628, Apr  6 2013, 20:25:12) [MSC v.1600 32 bit (Intel)]
print (sys.platform) #win32

class Student():
    def __init__(self,nm='Tim'):
        self.name = nm
    def func(self):
        print ("this is a function")
        return 1996

s = Student()
print (s.name) #Tim
print (s.func()) #This is a function 1996
print (s.func) #<bound method Student.func of <__main__.Student object at 0x02845C70>>

#2-15
#(a)
a,b,c = 2,-5,-1
L = []
for i in [a,b,c]:
    if i>i-1:
        i = i-1

print (L)