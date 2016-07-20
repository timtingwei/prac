#print_sys.py


# python2.x  里面的语法
import sys
#print >> (sys.stderr,'Fatal error:invalid input!')

#open() 传入文件位置 + 打开的方式
#'r' 读,'w' 写 ,'a'添加
#当为只读的时候，文件就会抛出 IORrror错误
logfile =  open('E:/tim/prac/py/corePy/test.txt','r')
print (logfile.read()) #return there is a sentence
logfile.close()

logfile1 = open('E:/tim/prac/py/corePy/test.txt','a')
logfile1.write('add second sentence.')
logfile1.close()

logfile1_read = open('E:/tim/prac/py/corePy/test.txt','r')
print(logfile1_read.read())
logfile1_read.close()
#there is a sentence..
#there is a sentence..add second sentence.