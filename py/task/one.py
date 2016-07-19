#file one:py

def func():
    print ("func() is one.py")

print ("top-level in one.py")

if __name__ == "__main__":
    print ("one.py is being imported into another module")
else:
    print ("one.py is being imported into another module")


'''
top-level in one.py
one.py is being imported into another module
'''
