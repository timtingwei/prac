#!usr/bin/env python

import string

alphas = string.ascii_letters +'_'
nums = string.digits

print ("Welcome to the Identifier Checker v1.0")
print ("Testees must be at least 2 chars long.")
myInput = input("Idntifier to test?")

if len(myInput) > 1:
    pass
if myInput[0] not in alphas:
    print ("invalid:first symbol must be alphabetic")
else:
    for otherChar in myInput[1:]:
        if otherChar not in (alphas + nums):
            print ("invalid:remaining symbols must be alphanumeric")
        break
#print (alphas)