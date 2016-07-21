#function.py  --> 11章

def addMe2Me(x):
    'apply + operation to argument'
    return x + x

print (addMe2Me(2))
print ('5'+'4') #return 54 +能连接两个字符串

print (addMe2Me('Python')) #PythonPython
print (addMe2Me([-1,'abc'])) #[-1, 'abc', -1, 'abc']
#DICT = {'a':5,'b':10,}
#print (addMe2Me(DICT)) #WRONG 不支持字典相加
def Iteration(n):
    if n==1:return 1
    else:
        return (n + Iteration(n-1))

print (Iteration(3))

def foo(debug = True): #参数可以有个默认值
    'determine if in debug mode with default argement'
    if debug:
        print ('in debug mode')
    print ('done')

foo() #in debug mode done
foo(False) #done


