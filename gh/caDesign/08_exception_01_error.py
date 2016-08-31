#08_exception_01_error.py

print (list(x))
"""
Traceback (most recent call last):
  File "e:\tim\prac\gh\caDesign\08_exception_01_error.py", line 3, in <module>
    print (list(x))
NameError: name 'x' is not defined
"""

try:
    f = open('foo','r')
except IOError as e:
    error_log.write('Unable to open foo:%\n'%e)
else:
    data = f.read()
    f.close()