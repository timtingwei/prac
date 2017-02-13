#re06.py
# -*- coding:utf-8 -*-
#search(string[, pos[, endpos]]) | re.search(pattern, string[, flags]): 
import re

#将正则表达式编译成Pattern对象
pattern = re.compile(r'world')

#使用search()查找匹配的子串，不存在能匹配的子串时返回None
#这个例子中使用match()无法匹配成功

match = pattern.search('hello world!')

if match:
    #使用Match获得分组信息
    print match.group()

### 输出 ###

match_test1 = re.match(r'hello','hello world')
match_test2 = re.match(r'world','hello world')
if match_test1:
    print match_test1.group()
else:
    print 'match_test1 return none'

if match_test2:
    print match_test2.group()
else:
    print 'match_test2 return none'

### 输出 ###
#hello
#match_test2 return none

print match_test1.endpos
print match_test2.endpos


#match和search的区别还是没搞懂
