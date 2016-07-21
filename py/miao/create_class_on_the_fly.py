class Hello(object):
    def hello(self,name = 'world'):
        print ('hello,%s.' % name)
'''
h = Hello()
h.hello() #return hello,world.
#这里Hello()和Hello的区别是什么
print (type(Hello())) #<class '__main__.Hello'>
print (type(Hello)) #<class 'type'>  class的类型是type
print (type(h)) #<class '__main__.Hello'>  h的类型是class Hello
print (type(h.hello)) #<class 'method'>
print (type(h.hello())) #hello,world. <class 'NoneType'>
'''

#type()可以返回一个对象的类型，又可以创造出新的类
def fn(self,name = 'world'): #先定义函数
    print('Hello,%s.' % name)

Hello = type('Hello',(object,),dict(hello=fn)) #创建一个Hello class
#Q:type函数的格式是什么,为什么object后跟有逗号,dict()里面又是什么
#type()函数依次传入三个参数
#1.class名称
#2.继承父类的集合，因为是多重继承，所有要填逗号，写成tuple单元素写法
#3.class的方法名，与函数绑定

h = Hello()
h.hello() #Hello,world
print (type(Hello)) #<class 'type'>
print(type(h))#<class '__main__.Hello'> #__main__.在这里代表了什么
