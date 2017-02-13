#urllib2_test19.py
import urllib2
url = 'http://www.baidu.com'
request = urllib2.Request(url,data=data)
request.get_method = lambda: 'PUT' #or 'DELETE'
response = urllib2.urlopen(request) 