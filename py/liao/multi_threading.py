#multi_threading.py

#多线程，一个进程内多任务

#用threading这个高级模块，启动一个线程就是把一个函数传入并创建Thread实例，然后调用start()

import time, threading
#新线程执行的代码：
def loop():
    print ('Thread %s is running...'% threading.current_thread().name) #///threading模块有个current_thread()函数，返回的是当前线程的实例
    n = 0
    while n < 5:
        n = n + 1
        print ('thread %s >>> %s'%(threading.current_thread().name,n))
        time.sleep(1) #时间休止1s
    print ('thread %s ended.'%threading.current_thread().name)

print ('thread %s is running...' % threading.current_thread().name)
t = threading.Thread(target=loop,name='LoopThread') #///命名子线程为LoopThread意义在于打印，没有其他意义
t.start()
t.join()
print ('thread %s ended.'%threading.current_thread().name) #///默认启动的线程是主线程，MainThread是主线程的实例名称

