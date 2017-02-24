
D = {'a':1, 'b':2, 'c':3}
print D

D['e'] = 99
print D

#print D['f']
#KeyError: 'f'

#one solution is to test ahead of time

print 'f' in D 
#False

if not 'f' in D:
    print 'missing'
#missing

if not 'f' in D:
    print 'missing'
    print 'no, really...'
#missing
#no, really...


#avoid accessing nonexistent keys in the dictionaries 
value_test = D.has_key('x')  #2.X has_key()
print value_test
#False 

value = D.get('x',0)   #index but with a default
print value
#0

value = D['x'] if 'x' in D else 0
print value
#0
