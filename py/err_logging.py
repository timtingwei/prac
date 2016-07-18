#err_logging.py

#先打印错误信息，然程序仍然继续执行，并正常退出

import logging

def foo(s):
    return 10 / int(s)

def bar(s):
    return foo(s) * 2

def main():
    try:
        bar('0')
    except Exception as e:
        logging.exception(e)

main()
print ('END')
'''
ERROR:root:division by zero
Traceback (most recent call last):
  File "E:/tim/prac/py/err_logging.py", line 13, in main
    bar('0')
  File "E:/tim/prac/py/err_logging.py", line 9, in bar
    return foo(s) * 2
  File "E:/tim/prac/py/err_logging.py", line 6, in foo
    return 10 / int(s)
ZeroDivisionError: division by zero
END
'''

# no logging
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