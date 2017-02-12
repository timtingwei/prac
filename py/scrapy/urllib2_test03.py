import urllib
import urllib2

url = 'http://www.somserver.com/register.cgi'

values = {'name':'WHY',
          'location':'SDU',
          'language':'Python'}

data = urllib.urlencode(values)
req = urllib2.Request(url,data)
print type(req)
print values
#<type 'instance'>
#{'name': 'WHY', 'language': 'Python', 'location': 'SDU'}
print data
#name=WHY&language=Python&location=SDU
#response = urllib2.urlopen(req)
#the_page = response.read()
#print the_page