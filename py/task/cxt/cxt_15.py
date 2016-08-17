#cxt_15.py

#学习成绩>=90 分的同学用 A 表示，60-89 分之间的用 B 表示，60 分以下的用 C 表示。

#///Python 没有条件运算符

def grade(score):
    if score >= 90:
        return 'A'
    if score >=60:
        return 'B'
    else:
        return 'C'

print (grade(60))

n=3
b = True
if b:
    n+=1
    b = not b
elif not b:
    n-=1
    b = not b

print ([n,b])

#///if..else  if...else 是不同的代码块
#///if...elif...else  是同一代码块