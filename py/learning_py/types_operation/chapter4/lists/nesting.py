#Python's core data types is that they support arbitrary nesting

M = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
print M
#[[1, 2, 3], [4, 5, 6], [7, 8, 9]]
#represent a 3*3  matrix

print M[1]     #Get row 2
#[4, 5, 6]    
print M[1][2]    #Get row 2, then get item 3 within the row
#6
