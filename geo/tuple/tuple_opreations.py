#tuple_opreations.py

#Addtion
a = (6, 3, 7)
b = (1, 2, 4)

add =  tuple([a[i]+b[i] for i in range(len(a))])
print add
#(7, 5, 11)

#Multiplication
scalars = 2.0
#2*(6, 3, 7) = (12,6,14)
#(6, 3, 7) /2 = (3, 1.5, 3.5)
mul = tuple([i*scalars for i in a])
div = tuple([i/scalars for i in a])
print mul
#(12.0, 6.0, 14.0)
print div
#(3.0, 1.5, 3.5)