str = filePath
#print (str)


list1 = []
for i in str:
    re_str = i.split() #convert to list
    if len(re_str)>0:
        list1.append(re_str)
print (list1)


file = filePath
list1 = []
for line in file:
    if line != "\n":
        list1.append(line.split())
    #print (line.split())
    
print (list1)

#.isspace()
file1 =filePath
lists = [line.split() for line in file1 if not line.isspace()]
print (lists)

test_L = ""
print (test_L.isspace()) #False
test_L2 = "abc"
print (test_L2.isspace()) #False
test_L3 = "\n"
print (test_L3.isspace()) #True
test_L4 = "\s"
print (test_L4.isspace()) #False
