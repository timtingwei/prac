#urllib2_test10.py

from urllib2 import Request, urlopen, URLError, HTTPError

old_url = 'http://baidu.com'
req = Request(old_url)
response = urlopen(req)
print 'Old url : ' + old_url
print 'Real url : ' + response.geturl()
#Old url : http://baidu.com
#Real url : http://baidu.com
old_url = 'http://weibo.com/u/3182555220?refer_flag=1001030201_'
req = Request(old_url)
response = urlopen(req)
print 'Old url : ' + old_url
print 'Real url : ' + response.geturl()
#Old url : http://weibo.com/u/3182555220?refer_flag=1001030201_
#Real url : https://passport.weibo.com/visitor/visitor?entry=miniblog&a=enter&url=http%3A%2F%2Fweibo.com%2Fu%2F3182555220%3Frefer_flag%3D1001030201_&domain=.weibo.com&ua=php-sso_sdk_client-0.6.23&_rand=1486949154.7018
#followed a redirect