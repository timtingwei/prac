#err_print.py
#!/usr/bin/env python3
# -*- coding:utf-8 -*-
#用print把错误打出来，但后面还要去删除这个print
def foo(n):
    s = int(n)
    # print ('>>>n = %d' % n) TypeError :%d format: a number is required, not str
    #print ('>>>n = %s' % n)  #>>>n = 0
    print ('>>>s = %d'% s) #>>>s = 0
    return 10 /s
def main():
    foo('0')

print (main())

'''
>>>s = 0
Traceback (most recent call last):
  File "E:/tim/prac/py/err_print.py", line 12, in <module>
    print (main())
  File "E:/tim/prac/py/err_print.py", line 10, in main
    foo('0')
  File "E:/tim/prac/py/err_print.py", line 8, in foo
    return 10 /s
ZeroDivisionError: division by zero
'''