#Gaussian_Elimination.py


def Gaussian_Elimination(value,equal):
    m, n = len(value[0]), len(equal)
    print value[0][2]
    for j in range(n):
        #Pivol step 
        #find l such that a(l,j) has the largest value among (...)
        print j
        #exchange rows l and j 





#example
#x1 x2 x3 = c
#3  8  9  = -9
#2  -4 2  = 18
#1  -3 -2 = 6

value = [[-3,8,9],
         [2,-4,2],
         [1,-3,-2]]
equal = [-9,18,6]

Gaussian_Elimination(value,equal)