#version 0.1
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
    edge_list = []
    for line in p_pairs:                                               #add line which other points in right side  ---> clockwise
        valid = True
        for pt_index in rest_index[p_pairs.index(line)]:               #for all points not equal p or q
            valid = impilicit_form(P[pt_index],line)
            if valid == False:
                break
        if valid == True:
            edge_list.append(line)
    return edge_list
    
def GeneratePoint(n):
    #input:number of points
    #output:list of points
    domain = [-5,5]
    P = []
    for i in range(n):
        P.append([random.random()*5 + -5  , random.random()*5 + -5 ])
    return P

def impilicit_form(point,line):                                        ### fullfill judgement of which side
    vectorLine = [line[1][i]-line[0][i] for i in range(len(line[0]))]
    normal = [-vectorLine[1], vectorLine[0]]
    distance = line[0][0] * normal[0] + line[0][1] * normal[1]
    dot = sum ([ ( point[i] * normal[i]) for i in range(len(point))]) - distance 
    if dot > 0 :                                                       #left ---> False  if vec_n*X - d > 0 ---> positive  
        return False 
    elif dot < 0:                                                      #right ---> True ---> negative
        return True
    else:                                                              #dot = 0 ---> on line 
        return True

def sort_vertices(edge_list,L):
    #from the setE of edges construct a list L of vertices of CH(P),sorted in clockwise order
    last_vertex = L[-1]
    for edge in edge_list:
        if edge[0] == last_vertex:
            L.append(edge[1])
            #print edge[1]
            edge_list.remove(edge)
    if len(edge_list) > 1:
        sort_vertices(edge_list,L)
    return L

def start():
    P = GeneratePoint(5)
    #P = [[-2, 0], [2, 0], [4, 4], [-5, 5], [-2, 3]]
    print 'P:',P
    edge_list = SlowConvexHull(P)
    L = []
    L.append(edge_list[0][0])
    L.append(edge_list[0][1])
    edge_list.pop(0)
    L = sort_vertices(edge_list,L)
    print 'L:',L

    #write to file then drawing in rhino
    f1 = open('E:/tim/prac/geo/convex_hull/L.txt','w')
    f1.write(str(L))
    f1.close()

    f2 = open('E:/tim/prac/geo/convex_hull/P.txt','w')
    f2.write(str(P))
    f2.close()
    

start()

