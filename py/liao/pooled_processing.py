#pooled_processing.py

#///启动大量的子进程，可以用进程池的方式批量创建子进程

from multiprocessing import Pool
import os,time,random

def long_time_task(name):
    print ('Run task %s (%s)...' % (name,os.getpid()))
    start = time.time()#///获取时间用time模块中的time方法
    time.sleep(random.random() * 3)#///时间休眠[0,3)秒
    end = time.time()
    print ('Task %s runs %0.2f seconds.' % (name,(end-start)))

if __name__ == '__main__':
    print ('Parent process %s.'% os.getpid())
    p = Pool(4) #///Pool(4)的意思是创建4个子进程吗
    for i in range(5):
        p.apply_async(long_time_task,args=(i,))
    print ('Waiting for all subprocesses done...')
    p.close()#///调用close()之后，就不能继续添加Process了
    p.join()#///等到子进程执行完毕后，继续执行
    print ('All subprocesses done.')

#///Pool的默认大小是CPU的核数