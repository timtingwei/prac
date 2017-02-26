
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

def start2():

    point = [2,0]
    pts_on_line = [[1,2],[-1,3]]
    impilicit_form(point,pts_on_line)

start2()
    
