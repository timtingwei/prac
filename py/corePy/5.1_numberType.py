#numberTpye.py

anInt = 1
print (type(anInt)) #<class 'int'>

#3.X中已经没有长整型了
aLong = -9999999999
print (type(aLong)) #<class 'int'>

aFloat = 3.1415926535897932384626433832795
print (type(aFloat))#<class 'float'>

aComplex = 1.23+4.56J
print (type(aComplex))#<class 'complex'>

#“更新”数值对象
#但是数值对象是不可变对象
#Python的对象模型与常规对象模型有些不同。更新实际上是生成一个新的对象，并得到它的引用
#指针指向装变量值的盒子。无法改变盒子的内容，但可以将指针指向新的盒子。
#所有不可变类型都是这么回事

anInt += 1
aFloat = 2.717281828
del anInt
del aLong,aFloat,aComplex
#print (aInt) #NameError: name 'aInt' is not defined