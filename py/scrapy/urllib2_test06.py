#urllib2_test06.py

import urllib2

req = urllib2.Request('http://www.baibai.com')

try:urllib2.urlopen(req)

except urllib2.URLError,e:
    print e.reason

#[Errno 11004] getaddrinfo failed

#test try

try: a = 10 / 0 

except ZeroDivisionError as e:
    print ('except:',e) 