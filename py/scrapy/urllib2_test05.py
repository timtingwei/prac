#urllib2_test05.py

import urllib
import urllib2

url = 'http://www.baidu.com'
values = {'name' : 'WHY',
          'location' : 'SDU',
          'language' : 'Python'
}

user_agent = 'Mozilla/4.0 (compatible; MSIE 5.5; Windows NT)'

headers = {'User-Agent': user_agent}
data = urllib.urlencode(values)


req =  urllib2.Request(url,data,headers)
print type(req)

#print the_page
#response = urllib2.urlopen(req)
#the_page = response.read()
#print the_page
