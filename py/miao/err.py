# err.py:

#调用堆栈
def foo(s):
    return 10 / int(s)

def bar(s):
    return foo(s) * 2

def main():
    bar('0')

main()
print ("END")

'''
Traceback (most recent call last):
  File "E:/tim/prac/py/err.py", line 11, in <module>
    main()
  File "E:/tim/prac/py/err.py", line 9, in main
    bar('0')
  File "E:/tim/prac/py/err.py", line 6, in bar
    return foo(s) * 2
  File "E:/tim/prac/py/err.py", line 3, in foo
    return 10 / int(s)
ZeroDivisionError: division by zero
'''