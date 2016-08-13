#cxt5.py

#输入三个整数x,y,z,把这三个数由小到大输出

def biggest(x,y,z):
    temp = 0
    if x>y:
        temp = x
    else:
        temp = y
    if z>temp:
        temp = z
    return    temp

print (biggest(4,-1,2))

L = [4,-1,2]
L.sort()
print ("L={0}".format(L))
print ("max = %d"%L[-1])
