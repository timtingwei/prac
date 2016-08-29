#06_def_07_time.py

import time 
print (dir(time))
#///time模块中的函数可以实现获取当前时间，操作时间和日期，从字符串读取时间以及格式化时间为字符串。
#///几何上的应用往往是作为迭代的变量，随着时间的变化程序不断循环，直到某个条件满足要求停止运行

#///时间的表达有三种情况:
#1.实数(时间戳),time.time(),从新纪元1.1.0点开始计算到现在的秒数
#2.当前时间格式化为字符串，使用time.asctime()获取
#3.日期元组,使用time.localtime()

import time 
print (time.time()) #时间实数
#1472478773.726286
print (time.asctime()) #时间字符串
#Mon Aug 29 21:53:26 2016
print (time.localtime()) #时间元组
#time.struct_time(tm_year=2016, tm_mon=8, tm_mday=29, tm_hour=21, tm_min=55, tm_sec=2, tm_wday=0, tm_yday=242, tm_isdst=0)


