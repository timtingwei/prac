#captures more structured informations

rec = {'name': {'first':'Bob','last':'Smith'},
        'jobs': ['dev','mgr'],
        'age': 40.5}

print rec
print rec['name']
#{'last': 'Smith', 'first': 'Bob'}
print rec['name']['last']
#Smith

print rec['jobs']
print rec['jobs'][-1]
#mgr

rec['jobs'].append('janitor')
print rec
#{'age': 40.5, 'jobs': ['dev', 'mgr', 'janitor'], 'name': {'last': 'Smith', 'first': 'Bob'}}


#clean up the object's space when we no longer need it 
#automatically
rec = 0     #Now the object's space is reclaimed