#urllib2_test15.py
# -*- coding:utf-8 -*-
import urllib2
import socket
socket.setdefaulttimeout(10) #10秒钟后超时
urllib2.socket.setdefaulttimeout(10) #另一种方式