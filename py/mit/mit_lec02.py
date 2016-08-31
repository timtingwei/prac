mit_lec02.py

x = 15
///分支式程序，根据判断结果会改变程序运行的顺序
if x//2*2 == x: #///冒号表示代码块的开始
    print ('偶数')
else:print ('奇数') #///回车表示结束

z = 'b'
if 'x' < z :
    print ('Hello')
    print ('Mom')
if 'x' < z :
    print ('Hello')
print ('Mom')

x = 15
y = 13
z = 14
print (x,y,z)
if x < y:
    if x < z:print ('x最小')
    else:print ('z最小')
else:print ('y最小')

if x<y and x<z:print ('x最小')
elif y<z :print ('y最小')
else:print ('z最小')

y = 0
x = 3
itersLeft = x
while (itersLeft>0):
    y = y + x
    itersLeft -= 1
    print ('y=',y,',itersLeft',itersLeft)
print (y)

y = 0
x = 3
itersLeft = x
while True:
    y = y + x
    itersLeft -= 1
    print ('y=',y,',itersLeft',itersLeft)
    if not (itersLeft>0):break
print (y)
