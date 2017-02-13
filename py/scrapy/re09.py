#re09.py

import re

p = re.compile(r'\D+')

for  m in p.finditer('one1two2three3four4'):

    print m.group(),

### output ###
#one two three four

print 
q = re.compile(r'\d+')
for n in q.finditer('one1two2three3four4'):
    print n.group(),

### output ###
#1 2 3 4