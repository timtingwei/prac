#5.6.1 标准类型函数
#str()  type()

print (0xFF) #255
print (str(55.3e2)) #5530.0
print (type(0xFF)) #<class 'int'>
print (type(987654321)) #<class 'int'>
print (type(2-1j)) #<class 'complex'>

#5.6.2_数字类型函数
print (int(4.24444)) #4
print (float(4)) #4.0
print (complex(4)) #(4+0j)
print (complex(2.4,-8))#(2.4-8j)
print (complex(2.3e-10,45.3e4)) #(2.3e-10+453000j)

#功能函数
#四个用于数值运算： abs(),divmod(),pow(),round()

#abs() 参数的决定值 如果是复数返回math.sqrt(num.real2 + num.imag2)
print (abs(-1)) #1
print (abs(10.)) #10.0
print (abs(1.2-2.1j)) #2.4186773244895647
print (abs(0.23 - 0.78)) #0.55

print (divmod(10,3)) #(3, 1)
print (divmod(3,10)) #(0, 3)
print (divmod(10,2.5)) #(4.0, 0.0)
print (divmod(2.5,10)) #(0.0, 2.5)
#print (divmod(2+1j,0.5-1j)) 现在复数不能够直接楚了


#pow() 和双星（**） 运算符可以进行指数运算。
#一个是内建函数，一个是运算符

print (pow(2,5)) #32
print (pow(5,2)) #25
print (pow(3.141592,2)) #9.869600294464002

print (pow(1+1j,3)) #(-2+2j)

#round()用于对浮点数进行四舍五入运算。第二个参数：精确位数
print (round(3)) #3
print (round(3.45)) #3
print (round(3.4999999)) #3
print (round(3.4999999,1)) #3.5
print (round(3.4799999,2)) #3.48
import math
for eachNum in range(10):
    print (round(math.pi,eachNum))
'''
3.0
3.1
3.14
3.142
3.1416
3.14159
3.141593
3.1415927
3.14159265
3.141592654
'''

print (round(-3.5)) #-4
print (round(-3.49)) #-4
print (round(-3.49)) #-3  现在不会保留有效数字
print (round(-3.49,1)) #-3.5

for eachNum in (.2,.7,1.2,1.7,-.2,-.7,-1.2,-1.7):
    print ("int(%.1f)\t%+.1f"%(eachNum,float(int(eachNum))))
    print ("floor(%.1f)\t%+.1f"%(eachNum,math.floor(eachNum)))
    print ("round(%.1f)\t%+.1f"%(eachNum,round(eachNum)))
    print ('-'*20)

"""
int(0.2)	+0.0
floor(0.2)	+0.0
round(0.2)	+0.0
--------------------
int(0.7)	+0.0
floor(0.7)	+0.0
round(0.7)	+1.0
--------------------
int(1.2)	+1.0
floor(1.2)	+1.0
round(1.2)	+1.0
--------------------
int(1.7)	+1.0
floor(1.7)	+1.0
round(1.7)	+2.0
--------------------
int(-0.2)	+0.0
floor(-0.2)	-1.0
round(-0.2)	+0.0
--------------------
int(-0.7)	+0.0
floor(-0.7)	-1.0
round(-0.7)	-1.0
--------------------
int(-1.2)	-1.0
floor(-1.2)	-2.0
round(-1.2)	-1.0
--------------------
int(-1.7)	-1.0
floor(-1.7)	-2.0
round(-1.7)	-2.0
--------------------
"""

print(pow(2,2,3)) #1

#仅用于整数的函数 进制转换 ASCII转换

#进制转换
#hex() 16
#oct() 8
print (hex(255)) #0xff
print (hex(23094823)) #0x1606627
print (hex(65536*2)) #0x20000

print (oct(255)) #0o377

#ASCII
print (ord('a')) #97 #只能接受一个字符
print (ascii('a')) #'a'
print (chr(97))
