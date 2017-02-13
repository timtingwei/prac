#re05.py
import re
p = re.compile(r'(\w+) (\w+)(?P<sign>.*)',re.DOTALL)

print "p.pattern:", p.pattern
print "p.flags:", p.flags
print "p.groups:", p.groups
print "p.groupindex:", p.groupindex

### output ###
#p.pattern: (\w+) (\w+)(?P<sign>.*)
#p.flags: 16
#p.groups: 3
#p.groupindex: {'sign': 3}
