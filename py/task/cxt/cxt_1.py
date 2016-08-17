#cxt_1.py

#有1、2、3、4个数字，能组成多少互不相同且无重复数字的三位数，输出
L = []
for i in range(1,5):
    for j in range(1,5):
        for m in range(1,5):
            if i != j != m != i:
                num = m+10*j+100*i
                L.append(num)

print (L)


