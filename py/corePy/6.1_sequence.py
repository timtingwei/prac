#sequence.py

seq = 'abcde'
print (seq[3]) #d 获得下标为3的元素
print (seq[1:3]) #bc 获得下标从1到3的元素集合
print (seq * 2) #abcdeabcde 序列重复2次

seq2 = '123'
print (seq+seq2) #abcde123 连接序列seq1和seq2
print ('a' in seq) #True
print ('f' not in seq) #True f不在序列里

#连接操作符 +
seq1 = 'abc'
seq2 = '123'
L1 = list(seq1)
L2 = list(seq2)
L1.extend(L2)
print (L1) #['a', 'b', 'c', '1', '2', '3']
s = seq1.join(seq2)
print (s) #1abc2abc3

#重复操作符 *
L = L2*2 #['1', '2', '3', '1', '2', '3']
print (L)
print (seq1 * 2) #abcabc

#切片操作符
#通过指定下标的方式获得某一数据，通过下标范围来获得一组序列元素
names = ['Faye','Leanna','Daylen']
#print (names[4]) #WRONG超过长度
print (names[len(names)-1]) #Daylen 最大下标是len-1
print (names[-len(names)]) #Faye 负索引
print (('Faye','Leanna','Daylen')[1]) #Leanna 不用赋值给变量
print (names[:2])

#print (names[:len(names)])

player = ['a','b','c','d','e']
print (player[2:5]) #['c', 'd', 'e']
print (player[1:3]) #['b', 'c']
s = 'abcdefg'
print (s[::-1]) #gfedcba 翻转
print (s[::2]) #aceg 隔着一个取

#切片索引语法比简单的单一元素索引灵活的多
print (('Faye','Leana','Daylen')[-100:100]) #即使超过了字符串长度也不报错
#('Faye', 'Leana', 'Daylen')

#我的程序
str = 'abcde'
for i in range(len(str)):
    print (str[:len(str)-i])
'''
abcde
abcd
abc
ab
a
'''
#范例
s  = 'abcde'
i = -1
print (s[:0]) #'' 返回空，-1是最小索引了
print (s[:-1]) #abcd
print (s[:None]) #abcde #从第一个到遍历最后一个元素
for i in range(-1,-len(s),-1):
   print (s[:i])
'''
abcd
abc
ab
a
'''

print ('----'*10)
#6.1.3_BIFs内建函数

#浅拷贝 拷贝了对象的索引，而不是重新建立了一个对象
L = [1,2,3,4]
print (L) #[1, 2, 3, 4]
L1 = list(L) #把一个对象传给list()函数
print (L1) #[1, 2, 3, 4]

#序列类型可用的内建函数
names = 'tim'
num = [1,9,9,6,1,2,0,3]
for i,value in enumerate(names):
    print (i,value)
'''
0 t
1 i
2 m
'''

print (len(names)) #3
print (max(num)) #9
print (max(names)) #t
#(help(max)) #single iterable argument,two or more arguments
#print (max(names,num)) #list() > str() 无法比较
print (min(num)) #0

L = [('Bob',75),('Adam',92),('Bart',66),('Lisa',88)]
def by_name(t):
    t[0].lower
    return t
L2 = sorted(L,key = by_name)
print (L2)
#return [('Adam', 92), ('Bart', 66), ('Bob', 75), ('Lisa', 88)]

print (sum(num,111)) #sum(seq,init=0)

#reduce
from functools import reduce
def f(x,y):
    return x*y
L = [1,2,3,4]
r = reduce(f,L)
print (r) #24

def add(x,y):
    return x+y
s = reduce(add,L)
print (s) #return 10

#zip
#print (help(zip))
print (list(zip('ab','cd'))) #[('a', 'c'), ('b', 'd')]


