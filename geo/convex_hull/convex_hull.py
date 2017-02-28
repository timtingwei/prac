#ConvexHull version 0.4  
#revise condition of same x-coordinate sorted  ---> add funtion xySorted()           what sorted with dictionary
#deal with rounding errors that may distort the outcome of test                      --> it seems no rounding error in my pragram...
import random 
import time


def get_points(number):
    points = [[random.random()*0.0000001 , random.random()*0.0000001 ] for i in range(number)]
    return points

def by_first_x(t):
    return t[0]

def by_first_y(t):
    return t[1]

def which_turn(target_pt,point0_line,point1_line):
    vecLine = [point1_line[0] - point0_line[0] , point1_line[1] -point0_line[1]]
    normal = [-vecLine[1] ,vecLine[0] ]
    vec_p2x = [target_pt[0] - point0_line[0] , target_pt[1] - point0_line[1]]                      #vector point on line to target point
    result = normal[0] * vec_p2x[0] + normal[1] *  vec_p2x[1]
    if result > 0 :                                                                               #result > 0 --->positive ---> left  --> 1
        #print 'judge_whichSide : positive'
        return True 
    elif result < 0:                                                                               #result < 0 --->negative ---> right  --> 0
        #print 'judge_whichSide : negative'
        return False
    else:                                                                                            #result = 0 --->on line --->       --->  None
        #print 'judge_whichSide : on line'
        return None
def xySorted(P):
    #deal with the condition same x-coordinate
    sort_points = sorted(P,key = by_first_x)
    sort_points.append(['spam'])                #use for loop fullfill
    div_points = []
    sub_points = []
    sub_points.append(sort_points[0])
    for i in range(1,len(sort_points)):
        if sort_points[i][0] == sort_points[i-1][0]:
            sub_points.append(sort_points[i])
        else:
            div_points.append(sub_points)
            sub_points = []
            sub_points.append(sort_points[i])
    all_points = []
    for sub_points in div_points:
        new_sub_points = sorted(sub_points,key = by_first_y)
        for new_point in new_sub_points:
            all_points.append(new_point)
    return all_points


def ConvexHull(P):
    #intput : a set P of points in the plane
    #output : A list containing the vertices of CH(P) in the clockwise order
    
    #sort the points by x-coordinate,resulting in a sequence p1,...,pn
    #but sometimes x-coordinate  is not well defined,they are same
    p_sorted = xySorted(P)
    print 'p_sorted is ',p_sorted
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
        #lower_bool = which_turn(lower_l[-3],lower_l[-2],lower_l[-1])
        while (len(lower_l)>2) and (which_turn(lower_l[-3],lower_l[-2],lower_l[-1]) ):                                 # revise while to if  which_turn must be in while....shit
            lower_l.pop(-2)
    lower_l.pop(0)
    lower_l.pop(-1)
    sum_l = []
    sum_l.extend(upper_l)
    sum_l.extend(lower_l)
    return sum_l

def start():
    number = 6
    points = get_points(number)
    #points = [[0,1],[0,2],[0,3],[-1,4],[-2,2],[2,2],[3,0],[3,-2],[2,-1]]             #points  x -coordinate  is not well defined
    #points = [[0,1],[0,2],[0,3],[-1,4],[-2,2],[2,2],[3,0],[3,-2],[2,-1],[-1.955551,2.111111]]
    print 'points:',points
    sum_l = ConvexHull(points)
    print 'sum_l :',sum_l
    
    f1 = open('E:/tim/prac/geo/convex_hull/points.txt','w')
    f1.write(str(points))
    f1.close()

    f2 = open('E:/tim/prac/geo/convex_hull/sum_l.txt','w')
    f2.write(str(sum_l))
    f2.close()
    
for i in range(100):
    time.sleep(1)
    start()