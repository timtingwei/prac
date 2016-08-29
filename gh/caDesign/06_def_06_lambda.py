#06_def_06_lambda.py

def f(x):
    return x**2

print (f(3))
#9

flam = lambda x:x**2 #用lambda定义函数，x相当于形式参数，冒号后面为操作程序，赋值给定义变量flam,变量则类似以定义函数的名称

print (flam(3))

flam2 = lambda x,y:x+y

print (flam2(1,2))
#3
print (flam2(5,6))
#11
