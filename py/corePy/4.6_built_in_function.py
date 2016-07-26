#built_in_function.py



#cmp()在3.X中已经取消


def r():
    pass
#repr()返回一个对象的字符串表示
#python3.X中用ascii()，类似与repr()
print (repr("asfdc44o22"))
print (repr(r()))

#str()返回对象适合可读性好的字符串表示
astr = str(5)
print (type(astr)) #<class 'str'>

#4.6.1_type()

#接受一个对象作为参数，并返回它的类型 返回值是一个类型对象
print (type(4)) #<class 'int'>

print (type('Hello World!')) #<class 'str'>

print (type(type(4))) #<class 'type'>

#4.6.2_cmp() 在3.x中已经取消
def cmp(a,b):
    if a<b:
        return -1
    elif a>b:
        return 1
    else:
        return 0

a,b = -4,12
print (cmp(a,b))
print (cmp(b,a))
b = -4
print (cmp(a,b))

a,b = 'abc','xyz'
print (cmp(a,b))

#4.6.3_str()和repr()
#obj = eval(repr(obj))这个等式在通常情况下是成立的

print (str(4.53-2j)) #(4.53-2j)
print (str(1)) #1

print (str(2e10))#20000000000.0

print (str([0,5,9,9])) #[0, 5, 9, 9]

print (repr([0,5,9,9])) #[0, 5, 9, 9]

print (ascii([0,5,9,9]))  #python3.X中用ascii()，类似与repr()

#print (help(eval))
print (eval(repr(5))) #5

def mul(n):
    return n*n
exec('if True:print(mul(5))')
#使用函数代替运算符

p = pow(2,3) #same as 2 ** 3
print (p) #8


#type() 和 isinstance()

#type()返回任意python对象的类型，而不局限于标准类型
print (type(''))#<class 'str'>

s = 'xyz'
print (type(s))#<class 'str'>

print (type(100)) #<class 'int'>

print (type(0+0j))#<class 'complex'>

#print (type(0L)) 没有长整型了
print (type(0.0))#<class 'float'>

print (type([])) #<class 'list'>

print (type(())) #<class 'tuple'>

print (type({})) #<class 'dict'>

print (type(type)) #<class 'type'>

def sum(n):
    return n+1
print (type(sum)) #<class 'function'>

class Foo:pass
foo = Foo()
class Bar(object):pass
bar = Bar()

print (type(Foo)) #<class 'type'>
print (type(foo)) #<class '__main__.Foo'> Foo的一个实例

print (type(Bar)) #<class 'type'>
print (type(bar))

