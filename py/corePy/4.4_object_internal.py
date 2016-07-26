#4.4.4slice_object

foostr = 'abcde'
print (foostr[::-1])
print (foostr[::-2])

foolist = [123,'xba',342.23,'abc']
print (foolist[::-1])
print (foolist[1:3:2])

print (list(range(5))) #[0, 1, 2, 3, 4]
print ([range(5)]) #[range(0, 5)]
print ([i for i in range(5)]) #[0, 1, 2, 3, 4]

print (type(range(5))) #<class 'range'>
print (type(range)) #<class 'type'>