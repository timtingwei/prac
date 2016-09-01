#use_json.py
"""
#///JSON表示出来就是字符串，能够被所有的语言读取

#序列化一个dict
import json
d = dict(name='Bob',age=20,score=88)
print (json.dumps(d))
#{"name": "Bob", "age": 20, "score": 88}
#///pickle.dumps()把对象序列化成bytes

#把dict写入文件
with open('e:/tim/prac/py/miao/dump1.txt','w') as f:
    json.dump(d,f)
#反序列化 json.load()
with open('e:/tim/prac/py/miao/dump1.txt','r') as f:
    print (json.load(f))
    #{'score': 88, 'age': 20, 'name': 'Bob'}

#///JSON标准规定JSON编码是UTF-8,所以总是正确的读出str和JSON之间的转化
"""

#///JSON进阶
#///dict对象可以序列化为JSON的{}，不过更多时候是用class表示对象，然后序列化
import json

class Student(object):
    def __init__(self,name,age,score):
        self.name = name
        self.age = age
        self.score = score

s = Student('Bob',20,88)
#print (json.dumps(s))
#TypeError: <__main__.Student object at 0x02837F50> is not JSON serializable

#///Student对象不是一个可以序列化为JSON的对象
#///dumps方法不知道如何将Student实例变为一个JSON的{}对象

#///json.dumps()方法的可选参数default就是把任意一个可序列化为JSON的对象

#为Student专门写一个转换函数
def student2dict(std):
    return {
        'name' : std.name,
        'age' : std.age,
        'score' : std.score 
    }

#///Student首先被函数student2dict()转化为dict，然后被JSON序列化
print (json.dumps(s,default=student2dict))
#{"name": "Bob", "age": 20, "score": 88}


#///偷懒的方法，就是运用class的实例的__dict__属性
print (json.dumps(s,default=lambda obj : obj.__dict__))
#{"age": 20, "score": 88, "name": "Bob"}

#///用loads,object_hook来反序列化
def dict2student(d):
    return Student(d['name'],d['age'],d['score'])

json_str = '{"age": 20, "score": 88, "name": "Bob"}'
print (json.loads(json_str,object_hook=dict2student))
#<__main__.Student object at 0x028E7AF0>    #///返回了一个对象

#///json模块的dumps()和loads()函数是定义非常好的接口，简单使用时候只需要传入必须的参数，扩展时候可以传入可选参数

