# -*- coding: utf-8 -*-
#两个等价的re匹配，匹配一个小数

import re

a = re.compile(r"""\d + #the integral part
                   \.   #the decimal
                   \d * #some factional""",re.X)
b = re.compile(r"\d+\.\d*")

match11 = a.match('3.1415')
match12 = a.match('33')
match21 = b.match('3.1415')
match22 = b.match('33')

if match11:
    print match11.group()
else:
    print 'match11不是小数'

if match12:
    print match12.group()
else:
    print 'match12不是小数'

if match21:
    print match21.group()
else:
    print 'match21不是小数'

if match22:
    print match22.group()
else:
    print 'match22不是小数'

"""
3.1415
match12不是小数
3.1415
match22不是小数
"""