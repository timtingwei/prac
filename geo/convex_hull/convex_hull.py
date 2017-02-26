
import random 

def get_points(number):
    points = [[random.random()*5 -5, random.random()*5-5 ] for i in range(number)]
    return points

def by_fisrt(t):
    return t[0]

def which_turn(pt1,pt2,pt3):
    pass

def ConvexHull(P):
    #intput : a set P of points in the plane
    #output : A list containing the vertices of CH(P) in the clockwise order
    
    #sort the points by x-coordinate,resulting in a sequence p1,...,pn
    p_sorted = sorted(P,key = by_first)
    upper_l = []
    upper_l.append(p_sorted[0])
    upper_l.append(p.sorted[1])
    for i_upper in range(2,len(p_sorted)):
        upper_l.append(p_sorted[i_upper])
        while (len(upper_l) > 2) and (which_turn(upper_l[-3],upper_l[-2],upper_l[-1])):               #upper_l contains more than two points and the last three points in upper_l do not make a right RuntimeError
            upper_l.pop(-2)
    lower_l = []
    lower_l.append(p_sorted[-1])
    lower_l.append(p_sorted[-2])
    for i_lower in range(len(p_sorted)-2:0:-1):
        lower_l.append(p_sorted[i_lower])
        while (len(lower_l>2) and not (which_turn(lower_l[-3],lower_l[-2],lower_l[-1]))):
            lower_l.pop(-2)
    lower_l.pop(0)
    lower_l.pop[-1]
    sum_l = upper_l.extend(lower_l)
    return sum_l

def start():
    number = 10
    points = get_points(number)
    ConvexHull(points)