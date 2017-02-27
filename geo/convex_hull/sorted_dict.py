#this is means that we first sort by x-coordinate
#and if points have the same x-coordinate we sort them by y-coordinate

points = [[0,2],[0,1],[0,3],[-1,4],[-2,2],[2,2],[3,0],[3,-2],[2,-1]]

def by_first_x(t):
    return t[0]

sort_points = sorted(points,key = by_first_x)
print sort_points

sort_points.append(['spam'])     #use for loop fullfill
def by_first_y(t):
    return t[1]

"""
# this my test 
L = [0,0,1,1,2,2,3,3,3,3,3,4,4,5,6]
div_L = []
sub_L = []
sub_L.append(L[0])
for i in range(1,len(L)):
    if L[i] == L[i-1]:
        sub_L.append(L[i])
    else:
        div_L.append(sub_L)
        sub_L = []
        sub_L.append(L[i])
print div_L

all_L = []
for sub_L in div_L:
    for i in sub_L:
        all_L.append(i)
print all_L
"""
div_points = []
sub_points = []
sub_points.append(sort_points[0])
for i in range(1,len(sort_points)):
    print 'sort_points[i]',sort_points[i]
    if sort_points[i][0] == sort_points[i-1][0]:
        sub_points.append(sort_points[i])
        print sort_points[i]
    else:
        div_points.append(sub_points)
        sub_points = []
        sub_points.append(sort_points[i])
    
print 'div_points:',div_points

all_points = []
for sub_points in div_points:
    new_sub_points = sorted(sub_points,key = by_first_y)
    print 'new_sub_points is :',new_sub_points
    for new_point in new_sub_points:
        all_points.append(new_point)
print all_points