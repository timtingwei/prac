def  foobar(n):
    return n+1
#3.5.4引用计数

#增加引用计数
x = 3.14 #创建了一个浮点数对象，并将其引用赋值给x
y = x #创建了指向同一对象的别名y
foobar(x) #被作为参数传递给函数 （新的本地引用）
myList = [123,x,'xyz'] #成为容器对象的一个元素

#减少引用计数

#当变量被赋值给另外一个对象时，原对象引用计数自动减1
foo = 'xyz' #字符串对象"xyz"被创建给foo，计数 1
bar = foo #增加一个别名bar时。引用2
foo = 123 #foo被赋值给另外一个对象，"xyz"的引用计数-1
del foo #对象的别名被显式的销毁
myList.remove(x) #对象从一个窗口对象中移除
del myList #窗口对象本身被销毁