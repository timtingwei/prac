
D = {'food':'Spam','quantity':4, 'color' : 'pink'}
print D['food']   #fectch value of key 'food'
#Spam

D['quantity'] += 1
print D  
#{'food': 'Spam', 'color': 'pink', 'quantity': 5}


#build in different ways 
D = {}
D['name'] = 'Bob'  #Create keys by assignment 
D['job'] = 'dev'
D['age'] = 40
print D
#{'age': 40, 'job': 'dev', 'name': 'Bob'}

print D['name']
#Bob

#dictionaries can also be used to replace searching operations 
#indexing a dictionary by key is often the fastest way to code a search in Python

bob1 = dict(name='Bob',job='dev', age=40)  #Keywords name=value
print bob1 
print type(bob1['name'])
#<type 'str'>

bob2 = dict(zip(['name', 'job', 'age'],['Bob', 'dev', 40]))
print  bob2
#{'age': 40, 'job': 'dev', 'name': 'Bob'} 
#keys is scrambled


