#urllib2_test16.py
#-*- coding:utf-8 -*-

#test response.read()
"""
import urllib2
request = urllib2.Request('http://www.baidu.com/')
response = urllib2.urlopen(request)
print  response.read()
"""

import urllib2
request = urllib2.Request('http://www.baidu.com/')
request.add_header('User-Agent','fake-client')
response = urllib2.urlopen(request)
print  response.read()

#服务器会针对header做检查
#User-Agent:有些服务器或Proxy会通过该值来判断是否是浏览器发出的请求