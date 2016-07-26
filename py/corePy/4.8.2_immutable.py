#immutable.py

#数字和字符串是不可变的 同一对象的值不变
x = 'Python numbers and strings'
print (id(x)) #42086768
x = 'are ummutable?!? What gives?'
print (id(x)) #42088112 新的对象被创建并赋值，原来的对象没有变化
i = 0
print (id(i)) #505910624
i = i+1
print (id(i)) #505910640

#list可以被修改而无需替换原始对象，同一对象的值改变
aList = ['ammonia',83,85,'lady']
print (aList) #['ammonia', 83, 85, 'lady']

print(aList[2]) #85

print(id(aList)) #42760992

aList[2] = aList[2]+1
aList[3] = 'stereo'
print (aList) #['ammonia', 83, 86, 'stereo']
print (id(aList)) #42367376
#list的值改变了,id没有变，说明同一对象的值改变了