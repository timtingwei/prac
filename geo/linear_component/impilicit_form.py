
def impilicit_form(point,line):
    normal = [-line[1], line[0]]
    dot = sum ([ ( point[i] * normal[i]) for i in range(len(point))])
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

    point = [-1,-1]
    line = [2,2]
    impilicit_form(point,line)

start2()
    
