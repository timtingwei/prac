#object_type.py

print (type(42))
#<class 'int'>  42这个对象的类型,返回的实际上是一个类型对象

t = type(42)
print (type(t))
#<class 'type'> 类型对象的类型是type，是所有类型的根和所有python标准类的元类（metaclass）

#类就是类型，实例就是对应类型的对象

#None.Python的Null
#不支持运算，也没有任何内建方法。

print (bool(None)) #False
print (bool(0.0)) #False 浮点0
print (bool(0.0+0.0j)) #False 复数0
print (bool('')) #False  字符串为空
print (bool([])) #False 空list
print (bool(())) #False 空tuple
print (bool({})) #False 空dictionary
