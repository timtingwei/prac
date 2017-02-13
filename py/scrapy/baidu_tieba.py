#-*- coding:utf-8 -*-
#----------------------------
# 程序：贴吧爬虫
# 版本：0.1
# 作者:why
# 日期：2013-05-14
# 语言：Python 2.7
# 操作：输入带分页的地址，去掉最后面的数字，设置一下起始页数和终点页数
# 功能：下载对应页码内所有页面并存储为html文件
#----------------------------

"""
#test for...in
for i in range(0,5+1):
    print i
#test string.zfill(x,width)
import string
a = 2
aName = string.zfill(a,5)
aName_str = string.zfill(str(a),5)
print aName
#00002
print aName_str
#00002

#test open()
f_test = open('a','w')
f_test.write('m')
f_test.close()
"""

import string, urllib2

#定义百度函数
def baidu_tieba(url,begin_page,end_page):
    for i in range(begin_page, end_page+1):
        sName = string.zfill(i,5) + '.html' #自动填充成六位的文件名
        print '正在下载第' + str(i) + '个网页，并将其存储为' + sName + '........'
        f = open(sName,'w+')
        m = urllib2.urlopen(url + str(i)).read()
        f.write(m)
        f.close()

#------在这里输入参数--------------

#http://tieba.baidu.com/p/4964971797
#iPostBegin = 1
#iPostEnd = 10

bdurl = str('http://tieba.baidu.com/p/4964971797')
begin_page = int(1)
end_page = int(10)
#------在这里输入参数--------------

#调用
baidu_tieba(bdurl,begin_page,end_page)

"""
正在下载第1个网页，并将其存储为00001.html........
正在下载第2个网页，并将其存储为00002.html........
正在下载第3个网页，并将其存储为00003.html........
正在下载第4个网页，并将其存储为00004.html........
正在下载第5个网页，并将其存储为00005.html........
正在下载第6个网页，并将其存储为00006.html........
正在下载第7个网页，并将其存储为00007.html........
正在下载第8个网页，并将其存储为00008.html........
正在下载第9个网页，并将其存储为00009.html........
正在下载第10个网页，并将其存储为00010.html........
"""