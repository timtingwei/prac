#cxt_22.py

#两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。
#有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

L1 = ['a','b','c']
L2 = ['x','y','z']
match = []
for j in L1:
    inter_L = []
    for i in L2:
        if (j == 'a') and (i == 'x'):
            continue
        if ((j == 'c') and (i == 'x')) or ((j == 'c') and (i == 'z')):
            continue

        inter_L.append((j,i))
    match.append(inter_L)

print (match)

#分别在a，b，c三种情况下选择一组，放在一个list中，如果没重复的可以，有重复的不行
new_list = []
for p in match[0]:
    for q in match[1]:
        for n in match [2]:
            new_list.append([p,q,n])

print (new_list)
print (len(new_list))

from functools import reduce
for list in new_list:
    num = reduce(lambda x,y:x+y,list)
    if len(num) == len(set(num)):
        print (num)
    

#print (list)