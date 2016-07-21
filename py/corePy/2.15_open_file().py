#open_file().py ---> 9.X

#如何打开文件
#handle = open(file_name,access_mode = 'r')

#access_mode中的'r'表示读取,'w'表示写入,'a'表示添加,'+'表示读写,'b'表示二进制访问,default为'r'

#文件对象的方法属性，必须通过属性标识法访问： object.attribute
#object = 类 模块 文件 复数

filename = input('Enter file name:')
fobj = open(filename,'r')
for eachLine in fobj:
    print (eachLine),
fobj.close()