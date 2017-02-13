#urllib2_test14.py
# -*- coding:utf-8 -*- 
import urllib2
enable_proxy = True
proxy_handler = urllib2.ProxyHandler({"http":'http://some-proxy.com:8080'})
null_proxy_handler = urllib2.ProxyHandler({})
if enable_proxy:
    opener = urllib2.build_opener(proxy_handler)
else:
    opener = urllib2.build_opener(null_proxy_handler)
urllib2.install_opener(opener)
#使用urllib2.install_opener()会设置urllib2的全局opener
#要细致的控制是，调用opener的open方法代替全局的urlopen方法

print proxy_handler
#<urllib2.ProxyHandler instance at 0x025525A8>
print type(null_proxy_handler)
#<type 'instance'>w



