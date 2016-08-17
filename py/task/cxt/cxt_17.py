#cxt_17.py

#题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

def count(string):
    if len(string) != 0:
        letter = 0
        space = 0
        digit = 0
        others = 0
        for i in string:
            
            if i.isalpha():
                letter +=1
            elif i.isspace():
                space += 1
            elif i.isdigit():
                digit += 1 
            else:
                others +=1

    return {'l':letter,'s':space,'d':digit,'oth':others}

d = count('tim110,s')
print ('letter = %d,space = %d,digit = %d,others = %d' % (d['l'],d['s'],d['d'],d['oth']))
print ('letter =  {0}'.format(d['l']))


#///字典创建用{} 调用使用key值，不可变为整数和字符串
#dic = {'a':2,'b':3}
dic = {'a':2,'b':3}

print (dic['a'])

#///key用整数
dict2 = {0:[1,2,3],1:[2.3,2],2:'aa'}
print (dict2[0])
print (dict2[1])
print (dict2[2])
