#07_class_04_yield.py

lst = []
lst.append(list(range(3,20,3)))
sublst = list(range(5))
sublst.append([3,7,67])
lst.append(sublst)
lst.append(89)

def flatten(nested): #定义生成器，包含yield语句的函数
    try: #try/except 捕获异常
        for sublist in nested: #循环列表
            for element in flatten(sublist): #递归的方法循环子列表
                yield element #使用yield语句,每次生成多个值，返回一个值的时候函数就被冻结，再次激活时候，从停止的那点开始执行
    except TypeError:#展开一个元素时被告知错误
        yield nested #返回引发异常的值


print (lst)
#[[3, 6, 9, 12, 15, 18], [0, 1, 2, 3, 4, [3, 7, 67]], 89]
flst = list(flatten(lst))
print (flst)
#[3, 6, 9, 12, 15, 18, 0, 1, 2, 3, 4, 3, 7, 67, 89]

#///生成器的核心是使用yield 语句。用生成器可以建立无穷的列表

def f(): #定义使用yield语句定义无穷列表生成器
    n = 0 #变量初始值
    while True: 
        yield 'loli#'+str(n)
        n+=1 #每次迭代变量n+1

g = f()
print (next(g))
#loli#0
print (next(g))
#loli#1
print (next(g))
#loli#2
print (next(g))
#loli#3

def myYield():
    a = 0
    while True:
        a += 1
        yield a

t = myYield() #///t引用了generator对象
print (t)
#<generator object myYield at 0x02854058>
Next = []
for i in range(100):
    Next.append(next(t))
print (Next)
#[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100]