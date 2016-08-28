#06_def_03_random.py

import random
print (dir(random)) #///dir()方法可以查看模块有哪些函数
#['BPF', 'LOG4', 'NV_MAGICCONST', 'RECIP_BPF', 'Random', 'SG_MAGICCONST', 'SystemRandom', 'TWOPI', '_BuiltinMethodType', '_MethodType', '_Sequence', '_Set', '__all__', '__builtins__', '__cached__', '__doc__', '__file__', '__initializing__', '__loader__', '__name__', '__package__', '_acos', '_ceil', '_cos', '_e', '_exp', '_inst', '_log', '_pi', '_random', '_sha512', '_sin', '_sqrt', '_test', '_test_generator', '_urandom', '_warn', 'betavariate', 'choice', 'expovariate', 'gammavariate', 'gauss', 'getrandbits', 'getstate', 'lognormvariate', 'normalvariate', 'paretovariate', 'randint', 'random', 'randrange', 'sample', 'seed', 'setstate', 'shuffle', 'triangular', 'uniform', 'vonmisesvariate', 'weibullvariate']

#///random模块提供各种用于生成伪随机的函数
L = [1,2,3,4.2,8,9.0]
a = random.choice(L) #///从非空序列seq中返回一个随机元素
print (a)
#4.2
b = random.shuffle(L)
print (b)
c = random.random() #///random() 返回[0.0,1.0]之间随机数
print (c)
#0.6024487433833341
d = random.uniform(1,10)
print (d)

print (random.sample(L,3))
