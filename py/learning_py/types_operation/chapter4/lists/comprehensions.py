M = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]

col2 = [row[1] for row in M]
print col2
#[2, 5, 8]

print M
#[[1, 2, 3], [4, 5, 6], [7, 8, 9]]

print [row[1] + 1 for row in M ]
#[3, 6, 9]
print [row + [1] for row in M]
#[[1, 2, 3, 1], [4, 5, 6, 1], [7, 8, 9, 1]]

print [row[1] for row in M if row[1] % 2 == 0]
#[2, 8]

diag = [M[i][i] for i in [0, 1, 2]]   #collect diagonal from matrix
print diag
#[1, 5, 9]

double = [c * 2 for c in 'spam']
print double
#['ss', 'pp', 'aa', 'mm']

double_str = str(double)
print double_str

double_str = ''
for s in double:
    double_str = double_str + s
print double_str
#ssppaamm

l = list(range(4))
print l
#[0, 1, 2, 3]
print list(range(-6,7,2))
#[-6, -4, -2, 0, 2, 4, 6]

print [[x**2, x**3] for x in range(4)]
#[[0, 0], [1, 1], [4, 8], [9, 27]]

print [[x, x/2 , x*2]for x in range(-6,7,2) if x>0 ]
#[[2, 1, 4], [4, 2, 8], [6, 3, 12]]


print M

G = (sum(row) for row in M)
print G
#<generator object <genexpr> at 0x02620328>
print next(G)
#6
print next(G)
#15
print next(G)
#24

print list(map(sum,M))
#[6, 15, 24]
print list(map(lambda x:x ** 2,range(5)))
#[0, 1, 4, 9, 16]

print [ord(x) for x in 'spaam']
#[115, 112, 97, 97, 109]

print {ord(x) for x in 'spaam'}
#set([112, 97, 115, 109])

print (ord(x) for x in 'spaam')
#<generator object <genexpr> at 0x025003A0>

mySet = {1,2,3,4,5}
print mySet
#set([1, 2, 3, 4, 5])

#generators,sets,dictionaries......

