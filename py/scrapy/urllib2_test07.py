#urllib2_test07.py

import urllib2
req = urllib2.Request('http://baidu.com')
req2 = urllib2.Request('http://bbs.csdn.net/callmewhy')
try:
    urllib2.urlopen(req)

except urllib2.URLError as e:
    print e.read()

try:
    urllib2.urlopen(req2)

except urllib2.URLError as e:
    print e.read()