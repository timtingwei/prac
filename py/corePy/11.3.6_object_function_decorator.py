#11.3.6_object_function_decorator.py

"""
@decorator(dec_opt_args):
def func2Bdecorated(func_opt_args):
    pass
"""
class MyClass(object):
    def staticFoo():
        print ('calling static method in staticfoo()')

    staticFoo = staticmethod(staticFoo)

class MyClass(object):
    @staticmethod
    def staticFoo():
        print ('calling static method in staticfoo()')
mc = MyClass()
mc.staticFoo()
#calling static method in staticfoo()

a = 1
print a
"""
def g(n):
    return n+1

def f(n):
    return n*n

@g
@f
def foo():
    return 2
"""
