#

def rotate_ConvexHull(P):
    points_list = sorted(P,key = by_x)
    vertices = []
    vertice = points_list[-1]
    vertices.append(vertice)

    original_vec = [0,-1]
    n = len(points_list)
    toggle = True
    while toggle:
        first_pt = vertices[-1]
        vecLine = original_vec
        lastAngle = -1                                    #before enter begin 
        for j in range(n):
            if first_pt != points_list[j]:
                vec_to_point_u = points_list[j][0] - first_pt[0] 
                vec_to_point_v = points_list[j][1] - first_pt[1] 
                vec_to_point = [vec_to_point_u,vec_to_point_v]
                cos_j  =  get_cosAngle(points_list[j],vertices[-2],vertices[-1])

                #// compare angle , save minor ,del other
                side_bool = judge_whichSide(points_list[j],vecLine)
                if side_bool:
                    angle = cos_j - 1
                else:
                    angle = 1 - cos_j
                if lastAngle > 0:
                    if angle < lastAngle:
                        lastAngle = angle
                        point_index = j
                        vec = vec_to_point
                else:
                    if angle > lastAngle:
                        lastAngle = angle
                        point_index = j
                        vec = vec_to_point
        if points_list[point_index] == vertices[0]:
            break
        vertices.append(points_list[point_index]) 
        vecLine = vec 
        print 'vertices'
        toggle = False
    return vertices  
                    
def judge_whichSide(target_pt,point0_line,point1_line):
    vecLine = [point1_line[0] - point0_line[0] , point1_line[1] -point0_line[1]]
    normal = [-vecLine[1] ,vecLine[0] ]
    vec_p2x = [target_pt[0] - point0_line[0] , target_pt[1] - point0_line[1]]                      #vector point on line to target point
    result = normal[0] * vec_p2x[0] + normal[1] *  vec_p2x[1]
    print  result
    if result > 0 : 
        print 'judge_whichSide : positive'
        return True 
    elif result < 0:
        return False
    else: 
        return None                                                                  ###mayebe error


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

def normalizedVector(vector):
    s = sqrt(vector[0]*vector[0] + vector[1]*vector[1])
    return [vector[0]/s,vector[1]/s]

def get_cosAngle(vec_a,vec_b):
    cos = vec_a[0]*vec_b[0] + vec_a[1]*vec_b[1]
    print 'cos:',cos
    return cos    

def main():
    P = [[-5,5],[-2,3],[4,4],[-2,0],[2,0]]
    rotate_ConvexHull(P)

main()