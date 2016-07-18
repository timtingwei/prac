#try...except...finally

#试试try机制
try:
    print ('try...')
    r = 10/0
    print ('result:',r) #前面r发生了错误，print()不被执行
except ZeroDivisionError as e: #how ZeroDivisionError run??
    print ('except:',e)
finally:
    print('finally...')
print('END')
#return
'''
try...
except: division by zero
finally...
END
'''
try:
    print ('try...')
    r = 10/2
    print ('result:',r) #run normally
except ZeroDivisionError as e:#skip except
    print ('except:',e)
finally:
    print('finally...')
print('END')
'''
try...
result: 5.0
finally...
END
'''
try:
    print ('try...')
    r = 10/2
    print ('result:',r) #run normally
except ZeroDivisionError as e:#skip except
    print ('except:',e)
else:
    print ('no error')
finally:
    print('finally...')
print('END')
'''
try...
result: 5.0
no error
finally...
END
'''

#错误也是class,所有的错误都继承自BaseException
#捕获一种错误时候，会把子类也一网打尽
#Example
def foo():
    r =max('s',-2)
    if r==(-1):
        return (-1)
    #do the funtion
    return r
try:
    foo()
except ValueError as e:
    print ('ValueError')
except UnicodeError as e:
    print ('UnicodeError')
except TypeError as e:
    print ('TypeError')

#TypeError

#错误class有包含关系
# https://docs.python.org/3/library/exceptions.html#exception-hierarchy

#跨级调试，不用在每一个错误后面调试，可以跨级调试
def foo(s):
    return 10/int(s)

def bar(s):
    return foo(s) * 2

def main(): #用main函数进行错误调试
    try:
        bar('0')
    except Exception as e:
        print ('Error:',e)
    finally:
        print('finally')

# TypeError
