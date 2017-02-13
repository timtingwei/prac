# -*- coding: utf-8 -*-
#一个简单的re实例，匹配字符串中的hello字符串

#导入re模块
import re

#将正则表达式编译成Pattern对象，hello前的r是“原生字符串”
pattern = re.compile(r'hello')

#使用pattern匹配文本，获得匹配结果，无法匹配返回None

match1 = pattern.match('hello world!')
match2 = pattern.match('helloo world!')
match3 = pattern.match('helllo world!')

#如果match1匹配成功
if match1:
    #使用Match获得分组信息
    print match1.group()
else:
    print 'match1匹配失败'

#如果match2匹配成功
if match2:
    #使用Match获得分组信息
    print match2.group()
else:
    print 'match2匹配失败'

#如果match3匹配成功
if match3:
    #使用Match获得分组信息
    print match3.group()
else:
    print 'match3匹配失败'

"""
---------------
hello
hello
match3匹配失败
---------------
"""