#eval()
a = 5
print (eval('37 + a')) #it is an expression
#42
print (exec('37 + a')) #it is an expression statement
#None

exec('a = 47')
print (a) #47

#eval('a = 47') #you cannot evaluate a statement
'''
Traceback (most recent call last):
  File "E:/tim/prac/py/corePy/4.6_built_in_function.py", line 71, in <module>
    eval('a = 47') #you cannot evaluate a statement
  File "<string>", line 1
    a = 47
      ^
SyntaxError: invalid syntax
'''


#exec set of statement contained in a string
exec('print(5)')
exec('x = 1')
exec('print(5)\nprint(6)') #prints 5{newline}6
exec('if True:print(6)') #prints 6
exec('5') #does nothing and returns nothing

#eval
x = eval('5')  # x <- 5
x = eval('%d + 6'% x) # x <- 11
x = eval('abs(%d)'% -100) # x <- 100
#x = eval('x = 5') # INVALID;assignment is not an expression
#x = eval('if 1:x = 4') # INVALID; if is a statement,not an expression


#compile
compile('a + b','<string>','eval')
print (int(True)) #1
