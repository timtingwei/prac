#re08.py
#findall

import re

p = re.compile(r'\d+')
print p.findall('one1two2three3four4')

### output ###
#['1', '2', '3', '4']

