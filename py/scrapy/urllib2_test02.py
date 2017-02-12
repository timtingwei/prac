#urllib2_test02.py

import urllib2

req = urllib2.Request('http://www.baidu.com/')
#req = urllib2.Request('ftp://www.baidu.com/')
print req
response = urllib2.urlopen(req)
the_page = response.read()
print the_page
