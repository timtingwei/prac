#Nujabes.py
from functools import reduce

def formatName(original):
    #定义类型引用赋值
    original = str(original)
    #姓和名交换位置并去掉空格，转换成list
    rename = original.split(' ')
    rename.reverse()
    strLst = list(reduce(lambda x,y:x+y,rename))
    #反转列表,转换成字符串
    strLst.reverse()
    restr = reduce(lambda x,y:x+y,strLst)
    #首字母大写，其余小写
    formatStr = restr.title()
    return formatStr

nameN = formatName('Jun Seba')
print (nameN)
#Nujabes
nameH = formatName('Tim Hu')
print (nameH)
#Mituh
nameY = formatName('Yue Chen')
print (nameY)
#Euynehc