#re07.py

#split(string[, maxsplit]) | re.split(pattern, string[, maxsplit]): 

import re

p = re.compile(r'\d+')
print p.split('one1two2three3four4')

### output ###
#['one', 'two', 'three', 'four', '']