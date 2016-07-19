#file two.py

import one

print ("top-level in two.py")
one.func()

if __name__ == "__main__":
    print ("two.py is being run directly")
else:
    print ("two.py is being imported into another module")

'''top-level in one.py
one.py is being imported into another module
top-level in two.py
func() in one.py
two.py is being run directly

'''

#module one gets loaded,its __name___ equals "one" instead of "__main__"