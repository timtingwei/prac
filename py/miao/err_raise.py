#err_raise.py

#错误是个class，捕获一个错误就是就是捕获错误的实例
#尽量使用Python已经有的错误类型
class FooError(ValueError):#继承ValueError
    pass

def foo(s):
    n = int(s)
    if n==0:
        raise FooError('invalid value : %s' % s)
    return 10/n

print(foo('0'))
'''
Traceback (most recent call last):
  File "E:/tim/prac/py/err_reraise.py", line 14, in <module>
    print(foo('0'))
  File "E:/tim/prac/py/err_reraise.py", line 11, in foo
    raise FooError('invalid value : %s' % s)
__main__.FooError: invalid value : 0
'''