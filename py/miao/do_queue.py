#do_queue.py

#用Queue,Pipes等方式Process之间通信

#///用Queue创建两个子进程，一个往Queue里写数据，一个从Queue中读数据

from multiprocessing import Process, Queue
import os, time, random
import pickle

#写数据进程执行的代码:
def write(q):
    print ('Process to write :%s'% os.getpid())
    for value in ['A','B','C']:
        print ('Put %s to queue...'%value)
        q.put(value)
        time.sleep(random.random())


#读数据进程执行的代码
def read(q):
    print ('Process to read: %s'% os.getpid())
    while True:#///read()过程是死循环
        value = q.get(True)
        print ('Get %s from queue.' % value)

if __name__=='__main__':
    #父进程创建Queue，并传给各个子进程
    q = Queue()
    ##创建实例
    pw = Process(target=write,args=(q,)) 
    pr = Process(target=read,args=(q,)
    #启动子进程pw,写入：
    pw.start()
    #启动子进程pr,读取:
    pr.start()
    #等待pw结束:
    pw.join()
    #pr进程是死循环，无法等待其结束，只能强行终止:
    pr.terminate()#///强行终止 terminate()

#///windows操作下与pickle有关

