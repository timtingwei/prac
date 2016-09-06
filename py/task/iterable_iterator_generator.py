#iterable_iterator_generator.py

#container
assert 1 in [1,2,3] #lists
assert 4 not in [1,2,3]
assert 1 in {1,2,3} #set
assert 4 not in {1,2,3}
assert 1 in (1,2,3) #tuples
assert 4 not in (1,2,3)

#///字典容器通过检查是否包含键来判断
d = {1:'foo',2:'bar',3:'qux'}
assert 1 in d 
assert 4 not in d 
assert "foo" not in d
assert "foo" in d.values()

#///字符串通过检查是否包含某个子串
s = 'foobar'
assert "b" in s
assert "foo" in s
assert "x" not in s

#/// attention 并非所有容器都是可以迭代对象

#可迭代对象
x = [1,2,3] #可迭代对象
y = iter(x) #迭代器
z = iter(x) #迭代器 iterator
print (next(y))
#1
print (next(y))
#2
print (next(z))
#1
print (type(x))
#<class 'list'>
print (type(y))
#<class 'list_iterator'>

#///可迭代类中的两个方法
print (y.__next__())
#3
print (z.__next__())
#2
print (y.__iter__()) #__iter__()方法返回self
#<list_iterator object at 0x028A6CD0>
print (z.__iter__())
#<list_iterator object at 0x028A6F90>

print (type(next))
#<class 'builtin_function_or_method'>

#///for循环实际上是生成了一个迭代器，用next()取下一个值
x = [1,2,3]
iter_x = iter(x) 
for elem in x : 
    print (iter_x.__next__())

#迭代器(Iterators)
#任何具有__next__()方法的对象都是迭代器，对迭代器调用next()方法可以获取下一个值

#itertools模块
from itertools import count
counter =count(start=13)
print (next(counter))
#13
print (next(counter))
#14

#///函数根据有限序列中生成无限序列
from itertools import cycle
colors = cycle(['red','white','blue'])
print (next(colors))
#red
print (next(colors))
#white
print (next(colors))
#blue
print (next(colors))
#red

#islice()函数根据无限序列中生成有限序列
from itertools import islice
colors = cycle(['red','white','blue'])  #infinite
limited = islice(colors,0,4)            #finite
for x in limited:                       #so safe to use for-loop on
    print (x)
"""
red
white
blue
red
"""

#///迭代器的内部结构
class fib(object):
    def __init__(self):
        self.prev = 0
        self.curr = 1

    def __iter__(self): #///__iter__()使得类是可以迭代的
        return self
    
    def __next__(self): #/// __next__()使得他是自身的迭代器
        """每次调用next()方法都会执行下面两步操作：
        1. 修改状态，以便下次调用next()方法
        2.计算当前调用的结果
        """
        value = self.curr
        self.curr +=self.prev
        self.prev = value
        return value

f = fib()
print (list(islice(f,0,10)))
#[1, 1, 2, 3, 5, 8, 13, 21, 34, 55]

#生成器 generator    
#yield  function没有return 语句，函数返回的是一个生成器
#是一种特殊的迭代器，高级，优雅。用一种简洁的语法来定义迭代器

"""
任意生成器都是迭代器(反过来不成立)
任意生成器，都是一个可以延迟创建值的工厂
"""
def fib():
    prev,curr = 0, 1
    while True:
        yield curr
        prev, curr = curr, prev + curr
    
f = fib()
print (f)
print (list(islice(f,0,10)))
#[1, 1, 2, 3, 5, 8, 13, 21, 34, 55]

#生成器类型
#两种类型生成器：生成器函数以及生成器表达式
numbers = [1,2,3,4,5,6]
numbers_L = [x*x for x in numbers]
print (numbers_L)
#[1, 4, 9, 16, 25, 36]

#使用set解析式达到同样的目的
numbers_set = {x*x for x in numbers}
print (numbers_set)
#{1, 36, 9, 16, 25, 4}

#dict解析式
numbers_dict = {x:x*x for x in numbers}
print (numbers_dict)
#{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36}

#生成器表示式
lazy_squares = (x * x for x in numbers)
print (lazy_squares)
#<generator object <genexpr> at 0x028406C0>
print (next(lazy_squares)) #第一次调用之后对象的状态已经改变了
#1
print (list(lazy_squares)) #后面一次只作用与剩下的部分
#[4, 9, 16, 25, 36]

#///生成器是Python中一种非常强大的特性，它让我们能够编写更加简洁的代码，同时节省内存，使用CPU也更加高效


#yield用法
def something():
    result = []
    for elem in range(10):
        result.append(elem)
    return result
print (something())
#[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

def iter_something():
    for elem in range(10):
        yield elem
print (list(iter_something()))
#[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

iter_list = [(yield i) for i in range(10) if i%2 == 0]
print (iter_list)
#<generator object <listcomp> at 0x02850B48>
print (list(iter_list))
#[0, 2, 4, 6, 8]