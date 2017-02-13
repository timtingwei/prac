#urllib2_test20.py
# -*- coding:utf-8 -*-

import urllib2
req = urllib2.Request('http://www.baidu.com')
response = urllib2.urlopen(req)
print response.getcode()
#200 --> normal

try:
    response = urllib2.urlopen('http://bbs.csdn.net/why')
except urllib2.HTTPError,e:
    print e.code
    #403
