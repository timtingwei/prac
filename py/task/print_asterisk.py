#!/usr/bin/python
#-*- coding:UTF-8 -*-

'''L = [1,9,33,22.9,3,44,50,90,7,70]

for i in L[0:6]:
    a = int(i)
    if 0<=i<=50:
        print (a * '*')
'''

if __name__ == '__main__':
    n = 1

    while n <= 7:
        a = int(input('input a number:\n')) #\n as to create a newline
        while a < 1 or a> 50:
            a = int(input('input a number:\n'))
        print (a * '*')
        n += 1