#07_class_03_iter.py

class Fibs():
    def __init__(self):
        self.a = 0
        self.b = 1
    def next(self): #实现迭代器next()方法
        self.a,self.b = self.b,self.a+self.b
        return self.a 
    def __iter__(self): #实现迭代方法
        return self

f = Fibs()
fa = []
fb = []
for i in range(9):
    fa.append(f.next())
print (fa)
#[1, 1, 2, 3, 5, 8, 13, 21, 34]
for i in range(5):
    fb.append(f.next())
print (fb)
#[55, 89, 144, 233, 377]

#///另一种迭代方法
lst = list(range(0,20,3))
print (lst)
#[0, 3, 6, 9, 12, 15, 18]
it = iter(lst) #///用iter的迭代列表
print (next(it))
#0
print (next(it))
#3

for i in it:
    print (i)
"""
6
9
12
15
18
"""