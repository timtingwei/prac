#error.py

#try-except语句 try之后的是要管理的代码，except之后是处理错误的代码

try:
    filename = input('Enter file name:')
    fobj = open(filename,'r')
    for eachLine in fobj:
        print(eachLine)
    fobj.close()
except IOError as e:
    print ('file open error:',e)

#file open error: [Errno 2] No such file or directory: 'aa'
