#urllib2_test08.py

from urllib2 import Request, urlopen, URLError, HTTPError

req = Request('http://bbs.csdn.net/callmewhy')

try:
    response = urlopen(req)
except URLError,e:
    print 'We failed to reach a server.'
    print 'Reason:',e.reason
    

except HTTPError,e:
    print 'The server couldn\'t fulfill the request.'
    print 'Error code:',e.code
#HTTPError

else:
    print 'No exception was raised.'
    #everything is fine
