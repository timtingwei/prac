import random

def weight_list(P,change_a,a_index):
    n = len(P)
    L = P
    sort_l = sorted(L)
    sort_index = [sort_l.index(L[i]) for i in range(n)] 
    print 'sort_index:',sort_index
    min_p = [3,3,3,3,3,3]
    w = [ 0 for i in range(n-1)]                             #weight = [0,0,0,0,1]
    w.append(1)
    print 'w:',w
    
    
    #first change the list
    L[a_index] += change_a
    dt = change_a
    #print 'L:',L
    #print 'dt:',dt
    for i in range(n):
        L[sort_index[i]] += dt*w[sort_index[i]]
        sort_L = sorted(L)
        sort_index = [sort_l.index(L[i]) for i in range(n)]
    
    while_i = 0
    while L[i] < min_p[i] :                                #float errror
        dt_m = L[i] - min_p[i]
        for i in range(n):
            L[sort_index[i]] += dt_m*w[sort_index[i]]
            sort_L = sorted(L)
            sort_index = [sort_l.index(L[i]) for i in range(n)]
    print 'L:',L
    return L

def start():
    P = [5,4,6,8,7,9]
    a_index = 0
    change_a = 3
    weight_list(P,change_a,a_index)

start()