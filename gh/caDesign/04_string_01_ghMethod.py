#04_string_01_ghMethod.py

lst = list("Hello Python!")
print (lst)
#['H', 'e', 'l', 'l', 'o', ' ', 'P', 'y', 't', 'h', 'o', 'n', '!']

x = "Hello "
y = "Python!"
z = x + y #///字符串连接使用+号即可
print (z)
#Hello Python!

lst = [ str(float(i)) for i in range(10)]
print (lst)
#['0.0', '1.0', '2.0', '3.0', '4.0', '5.0', '6.0', '7.0', '8.0', '9.0']
sep = "+"
lstjoin = sep.join(lst) #///join()sep插入列表之间
print (lstjoin)
#0.0+1.0+2.0+3.0+4.0+5.0+6.0+7.0+8.0+9.0

stri = "Hello Python!"
print (stri)
length = len(stri) #///len()获得str长度
print (length)
#13

lst_str = [str(float(i)) for i in range(10)]
sep = "+"
lstJoin = sep.join(lst_str) #///将sep嵌入
print (lstJoin)
#0.0+1.0+2.0+3.0+4.0+5.0+6.0+7.0+8.0+9.0


lstSplit = lstJoin.split("+")
print (lstSplit)
#['0.0', '1.0', '2.0', '3.0', '4.0', '5.0', '6.0', '7.0', '8.0', '9.0']

#///str.join() str.split() 是互逆方法

z = "Hello Python!"
print (z)

lowerStr = z.lower() #///返回小写字母版
print (lowerStr)
#hello python!

upperStr = z.upper() #///返回大写字母版
print (upperStr)
#HELLO PYTHON!

titleStr = z.title() #///首字母大写，其他字母小写
print (titleStr)
#Hello Python!

z = "Hello Python!"

subStr = z[6:] #///切片的方法提取字符串
print (subStr)

z = "                     Hello Python!"
stripStr = z.strip() #///strip()只移除两侧空格
print (stripStr)
#Hello Python!

strr = "Hello Python!"
#///replace替换字符串某一部分,find()是返回最左端的索引值
replaceStr = strr.replace("Python","Grasshopper") 
print (replaceStr)
#Hello Grasshopper!

stri = "Hello Python!" #定义字符串变量
strLst = list(stri)
print (strLst)
#['H', 'e', 'l', 'l', 'o', ' ', 'P', 'y', 't', 'h', 'o', 'n', '!']

strLst.sort() #///用sort()排序字符串
print (strLst)

strilower = stri.lower() #将字符串转换为小写
print (strilower)
#hello python!
strlstlower = list(strilower)
strlstlower.sort() #///sort()方法进行排序
print (strlstlower)
#[' ', '!', 'e', 'h', 'h', 'l', 'l', 'n', 'o', 'o', 'p', 't', 'y']

stri = "Hello Python!"
d = "Python"
num =  stri.find(d) #///find()返回字符串所在位置最左端的索引值
print (num)

