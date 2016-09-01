#with_file.py

f = open('E:/tim/prac/py/miao/test.txt','r')
#文件存在


#f1 = open('E:/tim/test.txt','r')
#抛出FileNotFoundError错误

#///不能通过print输出文件中的内容
print (f) #<_io.TextIOWrapper name='E:/tim/prac/py/miao/test.txt' mode='r' encoding='cp936'>

#///读取文件内容，一次性读取全部的内容
print (f.read()) #this my test file..

#///文件使用完毕后要关闭
f.close()

#///即使出错了也要关闭文件,用try...finally
try:
    f = open('E:/tim/prac/py/miao/test.txt','r')
    print (f.read())
finally:
    if f: #///如果f存在，就在使用完成后关闭
        f.close()
    print ("file has been closed...")

#///简化前面的操作 with语句来自动帮助我们调用close()方法
with open('E:/tim/prac/py/miao/test.txt','r') as f:
    print (f.read())


#///read(size) 每次最多读取size个字节的内容 ,反复调用
f = open('E:/tim/prac/py/miao/test.txt','r')
print (f.read(4)) #this
print (f.read(4)) # my 
f.close()

with open('E:/tim/prac/py/miao/test.txt','r') as f:
    print (f.read(4)) #this

#///readline()每次读取一行
with open('E:/tim/prac/py/miao/test.txt','r') as f:
    print (f.readline()) #this my test file..first line
    print (f.readline()) #second line

#///readlines()读取总有行数，放在一个list中
with open('E:/tim/prac/py/miao/test.txt','r') as f:
    L = (f.readlines())#['this my test file..first line\n', 'second line\n', 'third line ']
    for i in range(len(L)):
        print (L[i])

#this my test file..first line
#second line
#third line 


#///读取二进制文件 图片 视频
f = open('E:/tim/prac/py/miao/test.jpg','rb')
print (f.read()) #16进制表示的字节


#///读取非UTF-8编码文件,给open()传入encoding参数
f = open('E:/tim/prac/py/miao/test.txt','r',encoding='gbk')
print (f.read())

#///忽略编码错误
f = open('E:/tim/prac/py/miao/test.txt','r',encoding='gbk',errors='ignore')
print (f.read())


#///写文件 标识符用'w'or 'wb'
f = open('E:/tim/prac/py/miao/test.txt','w')
f.write('Hello,world!')
#print (f.read())
f.close()

with open('E:/tim/prac/py/miao/test.txt','r') as f:
    print (f.read()) #Hello,world! 覆盖掉之前的

with open('E:/tim/prac/py/miao/test.txt','w') as f:
    f.write('This is my test!')

with open('E:/tim/prac/py/miao/test.txt','r') as f:
    print (f.read()) #This is my test! 覆盖掉之前的

