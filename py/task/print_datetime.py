#!/usr/bin/python
# -*- coding:UTF-8 -*-

#print datetime as special format

import datetime

#输出今日日期，格式为 dd/mm/yyy。

print (datetime.date.today().strftime('%d/%m/%Y'))
#print(help(datetime.date.today().strftime)) format -> strftime() style string.

#创建日期对象

miyazakiBirthDate = datetime.date(1941,1,5)
#print(help(datetime.date)) date(year, month, day) --> date object

print (miyazakiBirthDate.strftime('%d/%m/%Y'))

#日期算术运算

miyazakiBirthNextDay = miyazakiBirthDate + datetime.timedelta(days = 1)
#print (help(datetime.timedelta))  number of day

print (miyazakiBirthNextDay.strftime('%d/%m/%Y'))

#日期替换
miyazakiFirstBirthday = miyazakiBirthDate.replace(year=miyazakiBirthDate.year + 1)

print(miyazakiFirstBirthday .strftime('%d/%m/%Y'))


'''
return:
19/07/2016
05/01/1941
06/01/1941
05/01/1942
'''