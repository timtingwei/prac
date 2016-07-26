#!/usr/bin/env Python

'readTextFile.py -- read and display text file'

#get filename
fname = input('Enter filename:')
print()

#attempt to open file for reading
try:
    fobj = open(fname,'r')
except IOError as e:
    print ("***file open errror:",e)
else:
    #display contents to the screeen
    for eachLine in fobj:

        print (eachLine)
    fobj.close()

