#-*- coding: utf-8 -*-
#do_subprocess.py

#///使用subprocess模块很多时候子进程并不是自身，而是一个外部进程。创建子进程后，要控制子进程的输入和输出

"""
import subprocess

print ('$ nslookup www.python.org')
r = subprocess.call(['nslookup','www.python.org'])
print ('Exit code:',r)
"""

import subprocess

print ('$ nslookup')
p = subprocess.Popen(['nslookup'],stdin=subprocess.PIPE,stdout=subprocess.PIPE)
output,err = p.communicate(b'set q=mx\npython.org\nexit\n')
print (output.decode('utf-8'))
print ('Exit code:',p.returncode)#////没搞懂????