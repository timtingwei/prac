
#err_assert.py

#assert的作用是 断言s 不等与0为True,否则's is zero'
#asser可以在启动时候 用-O关闭
def foo(n):
    s = int(n)
    assert s != 0,'s is zero!'
    return 10 /s
def main():
    foo('0')

print (main())
'''
Traceback (most recent call last):
  File "E:/tim/prac/py/err_assert.py", line 10, in <module>
    print (main())
  File "E:/tim/prac/py/err_assert.py", line 8, in main
    foo('0')
  File "E:/tim/prac/py/err_assert.py", line 5, in foo
    assert s != 0,'s is zero!'
AssertionError: s is zero!
'''