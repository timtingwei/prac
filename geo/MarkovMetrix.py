#MarkovMetrix.py

def MarkovMetrix(u0 ,n):
    metrixA = [[.8, .3],[.2, .7]]
    u_list = []
    u_list.append(u0)    
    for i in range(1,n+1):
        u = [metrixA[0][0]*u_list[i-1][0] +  metrixA[0][1]*u_list[i-1][1],metrixA[1][0]*u_list[i-1][0] + metrixA[1][1]*u_list[i-1][1] ]
        print u
        u_list.append(u)
    return u_list

def add_item(u_list):
    bool_list = []
    for items in u_list:
        result = items[0] + items[1]
        myBool = result == 1.0   #is sum number = 1? 
        #print myBool
        if myBool:
            pass
        else:
            #print 'item0:%s , item1:%s' %(items[0],items[1])
            pass
        bool_list.append(myBool) 
    return bool_list


u0 = (1,0)
v0 = (0,1)
n = 7
u_list = MarkovMetrix(u0,n)
add_item(u_list)
"""
[0.7000000000000002, 0.30000000000000004]
[0.6500000000000001, 0.3500000000000001]
[0.6250000000000001, 0.3750000000000001]
[0.6125000000000002, 0.38750000000000007]
[0.6062500000000002, 0.3937500000000001]
[0.6031250000000001, 0.3968750000000001]
item0:0.7 , item1:0.3
item0:0.65 , item1:0.35
item0:0.625 , item1:0.375
item0:0.6125 , item1:0.3875
item0:0.60625 , item1:0.39375
item0:0.603125 , item1:0.396875
"""

#guess s = (.6,.4) is a steady state vector