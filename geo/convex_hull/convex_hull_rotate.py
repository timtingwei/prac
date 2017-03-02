#

def rotate_ConvexHull(P):
    points_list = sorted(P,key = by_x)
    vertices = []
    vertice = points_list[-1]
    vertices.append(vertice)

    vec = [0,-1]
    n = len(points_list)
    for i in range(n):
        angle_list = []
        for j in range(n):
            if i != j:
                vec_to_point_u = points_list[j][0] - points_list[i][0] 
                vec_to_point_v = points_list[j][1] - points_list[i][1] 
                angle  =  vec_to_point_u * vec[0] + vec_to_point_v * vec[1]
                
                judge_whichSide_det()
                angle_list.append(angle)
        
        vertice_index = sorted(angle_list,key = by_x)[0]                     #// the minimum angle counterwise
        vertice = points_list[vertice_index]
        vertices.append(vertice)

def judge_whichSide_det(p,q,r):
    det = q[0]*r[1] + p[0]*q[1] + r[0]*p[1] - q[0]*p[1] - r[0]*q[1] - p[0]*r[1]
    if det > 0 : 
        print 'judge_whichSide_det : positive'
        return 0 
    elif det < 0:
        return 1
    else: 
        return 2    

def by_x(t):
    return t[0]