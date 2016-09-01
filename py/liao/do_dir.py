#do_dir.py


#///os模块的基本功能

import os 
print (os.name) #系统的操作类型
#nt 
#///name属性的返回值，如果是posix,操作系统Linux、unix或者Mac OS X ，如果是nt操作系统是win

#///获取详细的系统信息
#rint (os.uname()) #///在window上不提供


#///查看环境变量 environ
#print (os.environ)
#environ({'VSCODE_IPC_HOOK': '\\\\.\\pipe\\Code-e7d3e7-1.4.0-sock', 'PROCESSOR_IDENTIFIER': 'Intel64 Family 6 Model 61 Stepping 4...})

#用get(key)方法来获取某一环境变量
#print (os.environ.get('PATH'))

print (os.environ.get('x','default'))
#default
print (os.environ.get('x'))
#None


#///操作文件和目录

#///查看当前目录的绝对路径
print (os.path.abspath('.'))
#e:\tim\prac

#///创建新的一个目录:

#首先把新目录的完整路径表示出来:
print (os.path.join('e:/tim/prac','testdir')) #///合并路径总是用join
#e:	im\prac\testdir
#然后创建一个目录:
os.mkdir('e:/tim/prac/testdir')
#删除掉一个目录:
os.rmdir('e:/tim/prac/testdir')

#///拆分路径用split
print (os.path.split('e:/tim/prac/testdir'))
#('e:/tim/prac', 'testdir')

#拆分得到文件扩展名
print (os.path.splitext('e:/tim/prac/testdir')) 
#('e:/tim/prac/testdir', '')

#///文件重命名
#os.rename('test.txt','test.py')
#删除文件
#os.remove('test.py')


#///列出当前目录下所有的目录(利用python特性)
print ([x for x in os.listdir('.') if os.path.isdir(x)])
#['.git', '.idea', '.vscode', 'gh', 'py']
#///列出所有.py文件
print ([x for x in os.listdir('.') if os.path.isfile(x) and os.path.splitext(x)[1]=='.py'])
#[]
