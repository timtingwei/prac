#.split(sep[,maxsplit])
#.filter(function,iterable) function def x(n): bool

L = [1,]  #[,1] is wrong
print (L) #[1]  

i = 'str*ing1'
listi = list(i)
print (listi)

print (i.split('*')) #['str', 'ing1']
print (i.split('a')) #['str*ing1'] convert to list
print (i) #str*ing1 




#filter
from collections import Iterable
def test(n):
    print ( isinstance(n,Iterable))

test (range(5)) #True
test ([1,2,3]) #True
test ((1,2,3,4)) #True

print (type(lambda x:x%2 == 0)) #<type 'function'>

a = list(filter((lambda x:x%2 == 0),range(5)))
print (a) #[0, 2, 4]


b = list (filter((lambda x:x%3==0),(1,2,3,4,5,6)))
print (b) #[3, 6]


def cull_empty(n):
    return n and n.strip #.strip:remove leading and trailing whitespace
c = filter(cull_empty,['','a','.','C'])
print (c) #['a', '.', 'C']


d = filter((lambda x:x%2== 1),range(5))
print (d) #[1, 3]

e = filter(None,range(5))
print (e) #[1, 2, 3, 4]





