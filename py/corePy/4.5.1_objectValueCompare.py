#objectValueCompare.py
#-->2.4_operator.py

#数字类型根据数值大小比较
#字符串按照字符序列值进行比较
print (2 ==2) #True
print (2.46 <= 8.33) #True

print ('5+4j' >='2-3j') #True
print ('abc'=='xyz') #False
print ('abc'> 'xyz') #False
print ('abc' < 'xyz') #True

print ([3,'abc'] == ['abc',3]) #False
print ([3,'abc'] == [3,'abc']) #True

print (3 < 4 < 7) #same as (3 < 4 ) and (4 < 7)
print (4 > 3 == 3) #same as (4 > 3) and (3 == 3)
print ( 4 < 3 < 5 != 2 < 7) #False
