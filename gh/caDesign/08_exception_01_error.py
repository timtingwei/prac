#08_exception_01_error.py

#print (list(x))
"""
Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\08_exception_01_error.py", line 3, in <module>
    print (list(x))
NameError: name 'x' is not defined
"""

try:
    f = open('foo','r')
except IOError as e:
    print ('Unable to open foo:%s' % e)
else:
    data = f.read()
    f.close()

try:
    f.open('foo','r')
except IOError as e:
    print ('Error:%s'%e)
finally:
    #f.close()
    print ('finally end ') 

#///finally 语句为try代码块的结束操作，无论是否代码是否执行都执行此操作，如果没有异常在try执行后，立即执行，如果引发异常，控制权先交给finally字句的第一句

raise Exception()
"""
Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\08_exception_01_error.py", line 29, in <module>
    raise Exception()
Exception
"""

raise Exception('Computer say no..')
"""
Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\08_exception_01_error.py", line 37, in <module>
    raise Exception('Computer say no..')
Exception: Computer say no..
"""

#python中可以定义自己的异常类，要把Exception 定义为超类
class myException(Exception):pass  #like this 
raise myException
