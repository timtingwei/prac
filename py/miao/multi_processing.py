#multi_processing.py

#///python跨平台，在windows上编写多进程程序,
#///multiprocessing中的Process类代表一个进程对象

from multiprocessing import Process
import os 

#子进程要执行的代码
def run_proc(name):
    print ('Run child process %s (%s)...' % (name,os.getpid()))

if __name__ == '__main__':
    print ('Parent process %s.' % os.getpid())
    p = Process(target=run_proc,args=('test',))
    print ('Child process will start.')
    p.start()   #创建一个p实例，用start()方法启动
    p.join()
    print ('Child process end.')

#Parent process 6928.
#Child process will start.
#Run child process test (6256)...
#Child process end.
