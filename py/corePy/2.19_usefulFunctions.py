#usefulFunction.py

class Student(object):
    def __init__(self,nm):
        self.name = nm
        print ('creat name :%s' % self.name )
    def print_nm(self):
        print (self.name)
s = Student('Tim')

print(dir()) #显示对象的属性，如果没有提供属性，则显示全局变量名字
#['Student', '__builtins__', '__cached__', '__doc__', '__file__', '__loader__', '__name__', '__package__', 's']

#print (help(Student))#整齐美观的形式，显示对象的文档字符串
#print (help()) #缺省的时候进入交互模式

print (int('124412')) #将对象转换成整数

print(len('tim')) #3 返回对象的长度

#open(fn,mode) mode ('r'=读 'w'=写)

#range([[start,]stop[,step]) #返回一个整数列表。起始值为start,结束是stop -1.
#start 缺省 0 ，step缺省1

#a =  input('str=1') #标准输入，提供一个str作为提示信息

s = str(333) #转换成字符串
print ('end')
print (type(s)) #<class 'str'> 返回对象的类型(返回值本身是type对象)
