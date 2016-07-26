#3.x_prac.py

x, y, z = 1, 2, 3
z, x, y = y, z, x
print (x,y,z)

#True = 4
#print (True)

import os
ls = os.linesep #为os.linesep取一个新的别名 os.linesep需要在模块中找linesep.
#将常用的模块属性替换为一个本地引用，代码跑得更快
#get filename
'''
while True: #无限循环while
    fname = input("input a file name.")
    if os.path.exists(fname):
        print ("ERROR:'%s'already exists"% fname)
    else:
        break

try:
    fname = input("input a file name.")
except IOError as e:
    print ("***file ERROR : %s"% e)

# get file content (text) lines
all = [] #初始化list all
print ("\nEnter lines ('.' by itself to quit).\n")

#loop until user terminates input
while True:
    entry = input('>')
    if entry == '.':
        break
    else:
        all.append(entry)

#write lines to file with proper line-ending
fobj = open(fname,'w')
fobj.writelines(['%s%s'%(x,ls)for x in all])
fobj.close()
print ('DONE!')
'''

#!/usr/bin/env Python

'readTextFile.py -- read and display text file'

#get filename
fname = input('Enter filename:')
print()

#attempt to open file for reading
while True:
    fobj = open(fname,'r')
    if not os.path.exists(fname):
        print ("***file open errror")
    for eachLine in fobj:
        print (eachLine),
    fobj.close()
    break

try:
    fobj = open(fname,'r')
except IOError as e:
    print ("***file open errror:",e)
else:
    #display contents to the screeen
    for eachLine in fobj:
        print (eachLine),
    fobj.close()
