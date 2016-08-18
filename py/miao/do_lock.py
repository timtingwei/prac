#do_lock.py

#///多线程同时操作一个变量时，可能把变量改乱

import time,threading

balance = 0
def change_it(n):
    #先存后取，结果应该为0
    global balance #///声明balance为全局变量
    balance = balance + n
    balance = balance - n

def run_thread(n):
    for i in range(100000):
        change_it(n)

t1 = threading.Thread(target=run_thread,args=(5,))
t2 = threading.Thread(target=run_thread,args=(8,))
t1.start()
t1.join()
t2.start()
t2.join()
print (balance)

#balance = balance + n 分为两步 
#x = balance + n
#balance = x


#///确保一个线程在修改的balance的时候，别的线程不能同时执行change_it().
#///threading.Lock()同一时刻最有只有一个线程持有该锁，所以不会造成冲突修改

balance = 0
lock = threading.Lock()

def run_thread(n):
    for i in range(100000):
        #先要获取锁:
        lock.acquire()
        try:
            #放心的改:
            change_it(n)
        finally:
            #改完了一定要释放锁:
            lock.release()

t1 = threading.Thread(target=run_thread,args=(5,))
t2 = threading.Thread(target=run_thread,args=(8,))
t1.start()
t1.join()
t2.start()
t2.join()
print (balance)