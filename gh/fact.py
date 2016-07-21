#fact.py

#递归函数 没有出现for...in循环 只是迭代自身
def GetFact(n):
    if n==1:
        return 1
    else:
        return n * GetFact(n-1)

a = GetFact(5)
print (a)
