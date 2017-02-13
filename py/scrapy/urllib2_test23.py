#urllib_test23.py
#-*- coding:utf-8 -*-
import urllib2

#伪装成浏览器访问
#格式如下
#...

headers = {
    'User-Agent':'Mozilla/5.0 (Windows; U; Windows NT 6.1; en-US; rv:1.9.1.6) Gecko/20091201 Firefox/3.5.6'
}
req = urllib2.Request(
    url = ''，
    data = postdata,
    headers = headers
)

#...

#对付“反盗链”
#...
header = {
    'Referer':'http://www.cnbeta.com/articles'
}
#...

#headers是一个dict数据结构，你可以放入任何想要的header，来做一些伪装。