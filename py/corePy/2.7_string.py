#string.py

str = 'MyNameIsTim'
print (str[0],str[-1]) #M m

pystr = 'Python'
iscool = 'iscool!'
print (pystr[0]) #7
print (pystr[2:5]) #tho 实际上就只有三个 range(5)取到 4
print (iscool[3:]) #ool!
print (iscool[-1]) #!

# link with + *
print (pystr + iscool) #Pythoniscool!
print (pystr + ' ' +iscool) #Python iscool!
print (pystr * 2) #PythonPython
print ('-' * 20) #--------------------
pystr = '''python
is cool'''
print (pystr) #python\nis cool