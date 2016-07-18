#err_reraise.py

def foo(s):
    n = int(s)
    if n==0:
        raise ValueError('invalid value:%s' % s)
    return 10 / n

def bar():
    try:
        foo('0')
    except ValueError as e:
        print ('ValueError!')
        raise    #raise语句如果不带参数，就会把当前的错误原样抛出

bar()
'''
ValueError!
Traceback (most recent call last):
  File "E:/tim/prac/py/err_reraise.py", line 16, in <module>
    bar()
  File "E:/tim/prac/py/err_reraise.py", line 11, in bar
    foo('0')
  File "E:/tim/prac/py/err_reraise.py", line 6, in foo
    raise ValueError('invalid value:%s' % s)
ValueError: invalid value:0
'''

try:
    10/0
except ZeroDivisionError:
    raise ValueError('input error')
