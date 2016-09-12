#mit_lec07.py
"""
L = [1,2,3,4,10,2,4]
print (L)
#[1, 2, 3, 4, 10, 2, 4]
L.pop(2)
print (L)
#[1, 2, 4, 10, 2, 4]
L.remove(2)
print (L)
#[1, 4, 10, 2, 4]

Ivys = ['Yale',-1,'Princeton']
print (Ivys)
#Ivys[4] = 'four'
#print (Ivys)

Ivys.append('four')
print (Ivys)
#['Yale', -1, 'Princeton', 'four']

L1 = [1, 2, 3] #///绑定相同的对象
L2 = L1
L1[0] = 4
print (L2)
#[4, 2, 3]
print (id(L1),id(L2))
#42070424 42070424

L1 = L2 = [1, 2, 3] #///绑定相同的对象
L1[0] = 4
print (L2)
#[4, 2, 3]
print (id(L1),id(L2))
#42660568 42660568

L1 = []   #///一种微妙的情况，当L1指向空列表的时候，调整了指向性
print (L1)
#[]
print (L2)
#[4, 2, 3]

L1 = [1, 2, 3]
L2 = [1, 2, 3] #///绑定不同对象
L1[0] = 4 
print (L2)
#[1, 2, 3]
print (id(L1),id(L2))
#42791320 42791800

a = 1 
b = a
a = 2 #///整数是不可变对象，重新赋值后指向被打破了，重新指向了2
print (b) 
#1

def showDicts():
    EtoF = {'one':'un','soccer':'football','never':'janais'}
    print (EtoF['soccer'])
    #print (EtoF[0])
    print (EtoF) #///大括号里面随他去 没有顺序
    NtoS = {1 : 'one', 2 : 'two' , 'one': 1 ,'two' : 2}
    print (NtoS.keys())
    #dict_keys([1, 2, 'one', 'two'])
    print (NtoS.keys)
    #<built-in method keys of dict object at 0x027E5C10>
    del NtoS['one'] #///删的仍然是key
    print (NtoS) 

showDicts()
"""
import math

#Get base
inputOK = False
while not inputOK:
    base = input('Enter base:')
    if type(base) == type(1.0): inputOK = True
    else:print ('Error:  Base must be a float')

#Get Height
inputOK = False
while not inputOK:
    height = input('Enter height: ')
    if type(height) == type(1.0):inputOK = True
    else:print ('Error:  Height must be a float')

hyp = math.sqrt(base*base + height*height)
print ('Base: '+str(base),',height:'+str(height)+',hyp:'+str(hyp))
