#do_folk.py

#///os模块封装了常见的系统调用，包括fork
#///fork系统调用一次，返回两次，操作系统把当前进程复制一份，在父与子进程中分别返回


import os

print ('Process (%s) start...'% os.getpid()) #///子进程调用getppid()拿到父进程的id
#Only works on Unix/Linux/Mac:
if pid == 0:
    print ('I am child process (%s) and my parent is %s.'%(os.getpid(),os.getppid()))
else:
    print ('I (%s) just created a child process (%s).' % (os.getpid(),pid))

#///尴尬 windows上没有fork()调用