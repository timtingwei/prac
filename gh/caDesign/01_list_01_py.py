#01_list_01_py.py

format = "point_%s" #///可以现在外部写好format
dpoints = []
for i in range(10):
    dpoints.append(format % str(i))
print (dpoints)
#['point_0', 'point_1', 'point_2', 'point_3', 'point_4', 'point_5', 'point_6', 'point_7', 'point_8', 'point_9']
dpindex = list(range(len(dpoints)))
print (dpindex)
#[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]