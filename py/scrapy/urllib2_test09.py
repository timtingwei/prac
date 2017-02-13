#urllib2_test09.py

#test hasattr
class Student(object):

    def __init__(self,name,score):
        self.name = name
        self.score = score 
    
    def print_name(self):
        print 'Run function print_name'
        print self.name

Tim = Student('Tim',2)
Tim.print_name() 

if hasattr(Tim,'name'):
    print 'yes,has name'
if hasattr(Tim,'print_name'):
    print 'yes,has print_name'
if hasattr(Tim,'my'):
    print 'yes,has my'
else:
    print 'no,hasn\'t my '

#test elif
a = 5
if a<10:
    print 'a<10'
elif a>3:
    print 'a>3'
#a<10


from urllib2 import Request, urlopen, URLError, HTTPError

req = Request('http://bbs.csdn.net/callmewhy')

try:
    response = urlopen(req)

except URLError,e:
    if hasattr(e,'code'):
        print  'the server couldn\'t fulfill the request.' 
        print 'Error code:',e.code
        ##HTTP product a integer 'code'

    elif hasattr(e,'reason'):
        print 'We failed to reach a server'
        print 'Reason:',e.reason

else:
    print 'No exception was raised.'
    #everything is fine 
