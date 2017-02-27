
def impilicit_form(point,pts_on_line):
    #vec_n = (-line[1],line[0])
    #X =  [point[0],point[1]]
    #d =  point_on_line[0] * vec_n[0] +  point_on_line[1] * vec_n[1]   
    #if vec_n*X - d > 0 ---> positive
    normal = [- (pts_on_line[1][1]-pts_on_line[0][1]), ( pts_on_line[1][0] - pts_on_line[0][0]) ]
    distance =  normal[0] * pts_on_line[0][0] + normal[1] * pts_on_line[0][1]
    dot = sum ([ ( point[i] * normal[i]) for i in range(len(point))]) +distance
    print 'dot :',dot
    if dot > 0 : 
        print 'positive'
        return 0 
    elif dot < 0:
        print 'negative'
        return 1
    else: 
        print 'on line'
        return 2

def judge_whichSide(target_pt,point0_line,point1_line):
    vecLine = [point1_line[0] - point0_line[0] , point1_line[1] -point0_line[1]]
    normal = [-vecLine[1] ,vecLine[0] ]
    vec_p2x = [target_pt[0] - point0_line[0] , target_pt[1] - point0_line[1]]                      #vector point on line to target point
    result = normal[0] * vec_p2x[0] + normal[1] *  vec_p2x[1]
    print  result
    if result > 0 : 
        print 'judge_whichSide : positive'
        return 0 
    elif result < 0:
        print 'judge_whichSide : negative'
        return 1
    else: 
        print 'judge_whichSide : on line'
        return 2

def start2():

    point = [2,0]
    pts_on_line = [[1,2],[-1,3]]
    impilicit_form(point,pts_on_line)

    judge_whichSide(point,pts_on_line[0],pts_on_line[1])


start2()
    
