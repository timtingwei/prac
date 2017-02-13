#urllib2_test18.py

#Cookie
import urllib2
import cookielib
cookie = cookielib.CookieJar()
opener = urllib2.build_opener(urllib2.HTTPCookieProcessor(cookie))
response = opener.open('http://www.baidu.com')
for item  in cookie:
    print 'Name = '+item.name
    print 'Value = '+item.value
"""
Name = BIDUPSID
Value = ABCEDB8B4F08AA175989BCF5E751278E
Name = H_PS_PSSID
Value = 1444_21094_17001_22035
Name = PSTM
Value = 1486955620
Name = BDSVRTM
Value = 0
Name = BD_HOME
Value = 0
"""