#dictionary --->7.X

aDict = {'host':'earth'} #creat dict
aDict['port'] = 80 #add to dict
aDict[5] = 'five'
print (aDict) #{'port': 80, 'host': 'earth', 5: 'five'}
print(aDict.items()) #dict_items([('port', 80), ('host', 'earth'), (5, 'five')])
print(aDict.keys()) #dict_keys(['port', 'host', 5])
print (aDict['host']) #earth
#print (aDict['earth']) ERROR
for key in aDict:
    print (key,aDict[key])
    '''
    port 80
    host earth
    5 five
    '''

a = dict('host':'earth')