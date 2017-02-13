#re10.py

import re

p = re.compile(r'(\w+) (\w+)')
s = 'i say, hello world!'

print p.sub(r'\2 \1',s)

def func(m):
    return m.group(1).title() + ' ' + m.group(2).title()

print p.sub(func, s)