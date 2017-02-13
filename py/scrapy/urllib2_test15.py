#urllib2_test15.py
# -*- coding:utf-8 -*-
import urllib2
import socket
socket.setdefaulttimeout(10) #10秒钟后超时
urllib2.socket.setdefaulttimeout(10) #另一种方式
#以上做法是Python2.6之前

#Python2.6之后,超时可以通过urllib2.urlopen()直接设置
import urllib2
response = urllib2.urlopen('http://www.google.com',timeout = 10)

