#commonError1.py

def func(numbers = []):
    numbers.append(9)
    print (numbers)

func()
#[9]
func([1,2])
#[1, 2, 9]
func([1,2,3])
#[1, 2, 3, 9]

#///前面部分没有出现什么错误

#///再一次不输出参数
func()
#[9, 9]
func()
#[9, 9, 9]
func()
#[9, 9, 9, 9]

#///当不输入默认值的时候，python会让默认值引用储存的值。
#///在Python中函数的默认值，实在函数定义的时候实例化的，而不是在调用的时候
#///有两个变量，一个是内部的，一个是当前运行时变量。两个变量用相同的值进行交互，一旦numbers值变化，也会改变python里面保存的初始numbers值


#解决方案
def foo(numbers = None):    #///numbers默认参数为None 
    if numbers is None:
        numbers = []
    numbers.append(9)
    print (numbers)

foo()
#[9]
foo()
#[9]

#另外一个疑问
def func2(i=1):
    i+=5
    print (i)

func2()
#6
func2()
#6
#///整型是一种不可变的变量，当i+=5只是让i指向了不同的对象。而numbers.append(9)时候改变了list对象本身

import time
#另外一个例子
def print_now(now = time.time()):
    print (now)

print_now()
#1471440894.273257
print_now()
#1471440894.273257
print_now()
#1471440894.273257
