#use_pickle.py

d = dict(name='Bob',age = 20,score = 88)
#///修改变量
d['name'] = 'Tim'
print (d) 
#{'score': 88, 'age': 20, 'name': 'Tim'}

#///序列化pickling：把变量从内存中变成课存储或传输的过程。序列化后可以把内容写入磁盘，或者通过网络传到别的机器上

#pickle模块实现序列化
import pickle
d = dict(name='Bob',age=20,score=88)
print (pickle.dumps(d))
#b'\x80\x03}q\x00(X\x04\x00\x00\x00nameq\x01X\x03\x00\x00\x00Bobq\x02X\x05\x00\x00\x00scoreq\x03KXX\x03\x00\x00\x00ageq\x04K\x14u.'
#///pickle.dumps()把任意对象序列化成一个bytes,然后把bytes写入文件

#///用pickle.dump()把序列化后的对象写入file-like object
with open('e:/tim/prac/py/miao/dump.txt','wb') as f:
    pickle.dump(d,f)


#///pickle.load()反序列化出对象
import pickle
with open('e:/tim/prac/py/miao/dump.txt','rb') as f:
    d = pickle.load(f)

print (d) 
#{'name': 'Bob', 'age': 20, 'score': 88}

#///pickle只能用于python,并且不同版本的python可能不兼容。所以只用来保存不重要的数据，不能成功反序列化也没关系
