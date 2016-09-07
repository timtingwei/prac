#11.8.2_global.py

def foo():
    print ("\n calling foo()...")

    bar = 200
    print ("in foo(),bar is",bar)

bar = 100
print ("in __main__, bar is",bar,foo())
#print ("\n in __main__,bar is (still)",bar)

is_this_global = 'xyz'
def foo():
    #global is_this_global
    this_is_local = 'abc'
    #is_this_global = 'def'
    print (this_is_local + is_this_global)

foo()
#abcdef