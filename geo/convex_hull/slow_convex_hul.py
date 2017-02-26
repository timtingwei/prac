#-*- coding:utf-8 -*-
import random

def SlowConvexHull(P):
    """
    input a set P of points in the plane
    output:a list L containing the vertives of CH(P) in clockwise order
    """
    p_pairs = []
    rest_index = []
    for i in range(len(P)):
        for j in range(len(P)):
            if i != j:
                p_pairs.append([ P[i],P[j]])
                p_list = []
                for q in range(len(P)):
                    if (q != j) and (q != i):
                        p_list.append(q)
                rest_index.append(p_list)
    #print 'rest_index : ' , rest_index
    #print 'p_pairs:' , p_pairs
    #print 'len(p_pairs):%d,len(rest_index):%d',len(p_pairs),len(rest_index)
    L = []
    for line in p_pairs:
        valid = True
        #for all points not equal p or q
        for pt_index in rest_index[p_pairs.index(line)]:
            print 'P[pt_index]:',P[pt_index]
            print 'line:',line
            valid = impilicit_form(P[pt_index],line)
            if valid == False:
                break
        if valid == True:
            L.append(line)
    print 'P:',P
    print 'L:', L
    
def GeneratePoint(n):
    #input:number of points
    #output:list of points
    domain = [-5,5]
    P = []
    for i in range(n):
        P.append([random.randint(-5,5) , random.randint(-5,5) ])
    return P

def givePoints():
    P = [[-2, 0], [2, 0], [4, 4], [-5, 5], [-2, 3]]
    return P
def impilicit_form(point,line):                                        ### judgement side of point wrong
    vectorLine = [line[1][i]-line[0][i] for i in range(len(line[0]))]
    normal = [-vectorLine[1], vectorLine[0]]
    distance = line[0][0] * normal[0] + line[0][1] * normal[1]
    #print 'distance : ',distance
    #print 'normal : ',normal
    #print 'point : ' , point
    dot = sum ([ ( point[i] * normal[i]) for i in range(len(point))]) - distance 
    #print 'dot : ',dot
    if dot > 0 :                                                       #left ---> False  
        print 'positive'
        return False 
    elif dot < 0:                                                      #right ---> True
        print 'negative'
        return True
    else: 
        print 'on line'
        return True


def start():
    #P = GeneratePoint(5)
    P = [[-2, 0], [2, 0], [4, 4], [-5, 5], [-2, 3]]
    L = SlowConvexHull(P)

start()

