import urllib2
import urllib

data = {}

data['name'] = 'WHY'
data['location'] = 'SDU'
data['language'] = 'Python'

url_values = urllib.urlencode(data)
print url_values
#name=WHY&language=Python&location=SDU

url = 'http://www.example.com/example.cgi'
full_url = url + '?' + url_values

data = urllib2.urlopen(full_url)