#05_syntax_01_loop_iterationTools.py

#///并行迭代
#zip(listA,listB) 将两个列表以一一对应元组的形式放置在列表中，并能够使用循环语句解包元组
listA = [0,1,2,3]
listB = ['pointA','pointB','pointC','pointD']
ziplst = zip(listA,listB)
print (ziplst)
#<zip object at 0x028005D0>
d = dict(ziplst)
print (d)
#{0: 'pointA', 1: 'pointB', 2: 'pointC', 3: 'pointD'}
l = list(ziplst)
print (l)
#[]
A = []
B = []
for a,b in d.items():
    A.append(a)
    B.append(b)
print (A)
#[0, 1, 2, 3]
print (B)
#['pointA', 'pointB', 'pointC', 'pointD']

#///编号迭代
#enumerate()函数可以在迭代列表的时候同时返回索引值和项值
listC = ['pointA','pointB','pointC','pointD']
d = {}
for key,value in enumerate(listC):
    d[key]=value
print (d)
#{0: 'pointA', 1: 'pointB', 2: 'pointC', 3: 'pointD'}

#///列表推导式
lst = []
for i in range(3,37,5):
    if i%2 == 0:
        lst.append(i*i)
print (lst)
#[64, 324, 784]

lst = [ i*i for i in range(3,37,5) if i%2 == 0]
print (lst)
#[64, 324, 784]

print ([(x,y) for x in range(3) for y in range(2)])
#[(0, 0), (0, 1), (1, 0), (1, 1), (2, 0), (2, 1)]