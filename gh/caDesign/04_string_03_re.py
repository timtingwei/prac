#04_string_03_re.py

#regular expression 正则表达式,可以处理更复杂的字符串，本质是可以匹配文本片段模式

import re
pat = 'Python' #字符串书写的方式建立正则表达式模式
text = 'Hello Python!' #定义文本字符串变量
print (re.findall(pat,text)) #使用re.findall()以列表形式返回给定模式的所有匹配项
#['Python']
pat = 'python' #再次定义正则表达式模式，将单词Python改为python
print (re.findall(pat,text)) #///没找到任何匹配项
#[]

#///字符匹配-模式语法
#(.)匹配除了换行外的任何字符串，但是只匹配一个字母，多于一个或者0个都不会匹配
import re
pat = '.ython' #建立
textA = 'Hello Python!'
print (re.findall(pat,textA))
#['Python']
textB = 'Hello jython!'
print (re.findall(pat,textB))
#['jython']
textC = 'Hello gPython'
print (re.findall(pat,textC)) #///值匹配一个字母
#['Python']
textD = 'Hello Pthon!'
print (re.findall(pat,textD))
#[]

#///匹配多个字符
import re
pat = r'w?cadesign\.cn,w+\.cadesign\.cn' #使用特殊符?和+建立正则表达式
text = 'cadesign.cn,www.cadesign.cn'
print (re.findall(pat,text)) 
#/// ?可以匹配0或者多个字符，因此即使不存在字符'w',也会匹配'cadesign.cn'
#/// +号需要匹配至少一个，并尽可能多的匹配
#['cadesign.cn,www.cadesign.cn']
textB = 'wwwww.cadesign.cn,www.cadesign.cn'
print (re.findall(pat,textB))
#['cadesign.cn,www.cadesign.cn']

pat = r'w{2}\.cadesign\.cn' #使用(pattern){m,n}特殊字符建立正则表达式
text = 'www.cadesign.cn' #定义文本字符串变量
print (re.findall(pat,text)) #w{2}模式匹配了两个'w'字符
#['ww.cadesign.cn']

#///建立时候，使用r'string'原始字符串，(.)是特殊字符，不用原始字符串要用\\转译
#///使用*,+,?,{m,n}时如果模式为r'Hello Py*thon!' 则*只对之前一个字符y进行匹配。如果同时对P也匹配 r'Hello [Py]*thon'
pat = '[Py]*thon' #使用[]字符集建立正则表达式
textA = 'Hello Python!'
textB = 'Hello Pthon!'
textC = 'Hello ython!'
textD = 'Hello thon!'
print (re.findall(pat,textA)) #用'[Py]*thon'模式'Python'
#['Python']
print (re.findall(pat,textB)) #用'[Py]*thon'模式'pthon'
#['Pthon']
print (re.findall(pat,textC)) #用'[Py]*thon'模式'ython'
#['ython']
print (re.findall(pat,textD)) #用'[Py]*thon'模式'thon'
#['thon']

#///同时匹配不同不同种情况 ，管道符号即选择符号
#0.同时匹配'Python'和'Grasshopper' 'Python|Grasshopper'
#1.部分模式使用管道符号，可以用圆括号括起需要的部分'p(ython|erl)'
pat = 'Python|Grasshopper'
textA = 'Python'
textB = 'Grasshopper'
textC = 'Python and Grasshopper'
print (re.findall(pat,textA))
#['Python']
print (re.findall(pat,textB))
#['Grasshopper']
print (re.findall(pat,textC))
#['Python', 'Grasshopper']

#///正则表达式的方法
#re.findall(pattern,sstring),以列表形式返回给定模式的所有匹配项
#re.search(pattern.string),会在给定字符串中寻找第一个匹配给定正则表达式的子字符串，并返回MatchObject布尔值
#re.split(pattern,string[,maxsplit=0])根据模式的匹配项来分割字符串，这样可以使用任意长度的分隔符分隔字符串，其中maxsplit参数为字符串最多可以分隔成的部分书
#re.sub(pattern,repl,string) 使用给定的替换内容将匹配模式的字符串替换掉
#re.escape(string)可以对字符串中所有可能被解释为正则运算符的字符进行转义
#re.compile(pattern)可以将以字符串书写的正则表达式转换为模式对象

import re
pat = '[a-z]' #建立模式，匹配a-z所有小写字母
text = 'python PYTHON' #建立字符串
print (re.findall(pat,text)) #以列表形式返回给定模式的所有匹配项
#['p', 'y', 't', 'h', 'o', 'n']

pat = '[a-z]+' #建立模式，匹配a-z的所有小写字母，同时增加了+特殊字符，尽可能的多匹配项
print (re.findall(pat,text)) #增加+后小写字母不单独返回列表，而是紧凑
#['python']

#/// re.search(),返回MatchObject
print (re.search(pat,text)) #在字符串中寻找模式，返回MatchObject
#<_sre.SRE_Match object at 0x02869678>
if re.search(pat,text):
    print ('Fount it!')
#Fount it!

#///re.match()
print (re.match('p','python')) #给定字符串的开头匹配正则表达式
#<_sre.SRE_Match object at 0x02869678>
if re.match('p','python'): 
    print ('Found it!')
#Found it!

#///re.split()
text = 'Hello,,,,,,Python!'
pat = ','
print (re.split(pat,text)) #按照模式切分字符串
#['Hello', '', '', '', '', '', 'Python!']

pat = ',*' #建立正则表达式的模式，增加了*号，可以尽可能多的匹配逗号
print (re.split(pat,text)) #任意长度的,都可以作为分隔模式
#['Hello', 'Python!']

#///re.sub() #re.sub(pattern,repl,string)
pat = 'Python'
text = 'Hello Python' 
print (re.sub(pat,'Grasshopper',text)) #由给定的字符串替换匹配模式的字符串
#Hello Grasshopper

#///re.compile()
pat = re.compile('Python') #建立正则表达式的模式对象
print (pat.findall(text)) #等同于re.findall(pat,text)
#['Python']


#///匹配对象和组
#re.search()和re.match()返回的MatchObject实例包括关于分组内容的信息，和匹配值的位置数据
#组就是放置在圆括号内的子模式 r'www\.(.*)\..{3}'中(.*)即为组，可以并行和嵌套,并可以通过m.group()返回组，m.start()获取组的开始索引值，m.span()返回区间值
m = re.match(r'www\.(.*)\..{3}','www.python.org')
print (m.group(1))
#python
print (m.end(1))
#10
print (m.span(1))
#(4, 10)