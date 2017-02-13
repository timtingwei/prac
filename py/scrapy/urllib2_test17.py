#urllib2_test17.py
# -*- coding:utf-8 -*-

import urllib2
my_url = "http://www.google.cn/"
response = urllib2.urlopen(my_url)
redirected = response.geturl() == my_url
print redirected
#True

#request和urlopen的区别是
req = urllib2.Request(my_url)
response = urllib2.urlopen(req)
print response.geturl()

#自定义HTTPRedirectHandler的类
import urllib2
class RedirectHandler(urllib2.HTTPRedirectHandler):
    def http_error_301(self, req, fp, code, msg, headers):
        print "301"
        pass
    def http_error_302(self, req, fp, code, msg, headers):
        print "303"
        pass

opener =  urllib2.build_opener(RedirectHandler)
opener.open("http://www.baidu.com")
