#ps5.py

def get_frequency_dict(sequence):
    
    freq = {}
    for x in sequence:
        freq[x] = freq.get(x,0) + 1
    return freq

s = 'j1dffferer'
s2 = 'abbcccdddd'
print (get_frequency_dict(s))
print (get_frequency_dict(s2))

testDict = {'d':3,'e':2,'d':1}
print (testDict)
print (testDict.get('k',1)+1)
print (testDict)