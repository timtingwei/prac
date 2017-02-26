#ConvexHull version 0.2
import random 

def get_points(number):
    points = [[random.random()*5 , random.random()*5 ] for i in range(number)]
    return points

def by_first(t):
    return t[0]

def which_turn(pt1,pt2,pt3):                                                            #maybe wrong ,
    vecLine = [pt2[0] - pt1[0] , pt2[1] - pt1[1]]
    normal = [-vecLine[1],vecLine[0]]
    distance = normal[0] * pt1[0] + normal[1] * pt1[1]
    result = normal[0] * pt3[0] + normal[1] * pt3[1] - distance
    if result > 0:                                                                                  #result > 0 --->positive ---> left  --> 1
        return True
    elif result < 0 :                                                                               #result < 0 --->negative ---> right  --> 0
        return False
    else:                                                                                            #result = 0 --->on line --->       --->  None
        return None           
def ConvexHull(P):
    #intput : a set P of points in the plane
    #output : A list containing the vertices of CH(P) in the clockwise order
    
    #sort the points by x-coordinate,resulting in a sequence p1,...,pn
    p_sorted = sorted(P,key = by_first)
    upper_l = []
    
    upper_l.append(p_sorted[0])
    upper_l.append(p_sorted[1])
    for i_upper in range(2,len(p_sorted)):
        upper_l.append(p_sorted[i_upper])
        while (len(upper_l) > 2) and (which_turn(upper_l[-3],upper_l[-2],upper_l[-1])):               #upper_l contains more than two points and the last three points in upper_l do not make a right RuntimeError
            upper_l.pop(-2)
    
    lower_l = []
    lower_l.append(p_sorted[-1])
    lower_l.append(p_sorted[-2])
    for i_lower in range(len(p_sorted)-3,-1,-1):                                   #revise 0 to -1  
        lower_l.append(p_sorted[i_lower])
        lower_bool = which_turn(lower_l[-3],lower_l[-2],lower_l[-1])
        while (len(lower_l)>2) and (which_turn(lower_l[-3],lower_l[-2],lower_l[-1]) ):                                 # revise while to if  which_turn must be in while....shit
            lower_l.pop(-2)
    lower_l.pop(0)
    lower_l.pop(-1)
    sum_l = []
    sum_l.extend(upper_l)
    sum_l.extend(lower_l)
    return sum_l

def start():
    number = 100
    points = get_points(number)
    sum_l = ConvexHull(points)
    print 'sum_l :',sum_l
    
    f1 = open('E:/tim/prac/geo/convex_hull/points.txt','w')
    f1.write(str(points))
    f1.close()

    f2 = open('E:/tim/prac/geo/convex_hull/sum_l.txt','w')
    f2.write(str(sum_l))
    f2.close()
start()