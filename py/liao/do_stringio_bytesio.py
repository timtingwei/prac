#do_stringio_bytesio.py

#内存中读写str和bytes


#///数据读写不一定是文件，也可以用stringIO,在内存中读写

#///创建一个stringIO
from io import StringIO
f = StringIO()
print (f) #<_io.StringIO object at 0x02892B20> 是一个对象

#///write在这里是f的方法
f.write('Hello')
f.write(',')
f.write('world!')

#///用调用f的方法 getvalue 来获得写入后的str
print (f.getvalue()) #Hello,world!

#///初始化的时候在文件中写入
from io import StringIO
f = StringIO('Hello\nTim    \nGoodbye')
#f = StringIO('')

if f:
    print (f.getvalue())
#Hello
#Tim
#Goodbye

while f:
    s = f.readline()
    if s == '':
        break   #///break 一定只在循环结构中出现
    print (s.strip()) #///strip() 删除字符串多余的空格
#Hello
#Tim
#Goodbye
    

#///用BytesIO实现二进制数据的操作，读写bytes
from io import BytesIO
f = BytesIO()
f.write('中文'.encode('utf-8')) #///写入的是经过UTF-8编码的bytes
print (f.getvalue()) 
#b'\xe4\xb8\xad\xe6\x96\x87'

print ('中文'.encode('utf-8')) 
#b'\xe4\xb8\xad\xe6\x96\x87'

from io import BytesIO
f = BytesIO('中文'.encode('utf-8'))
print (f.read()) #b'\xe4\xb8\xad\xe6\x96\x87'

