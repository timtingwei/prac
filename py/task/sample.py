#sample.py

from functools import reduce
lst = [i for i in range(0,1000) if (i%2!=0)]
strLst = [str(n) for n in lst]
sep = '+'
lst_join = sep.join(strLst)
print ('%s = %f' %(lst_join,sum(lst)))
