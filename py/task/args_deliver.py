

if __name__ == '__main__': #why use 'if there'?
    class Student:
        x = 0
        c = 0
    def f(stu):
        stu.x = 20 #why a parameter has anattribute?
        stu.c = 'c'

    a = Student()
    a.x = 3
    a.c = 'a'
    f(a)    #is f() is a method in this class?
    print (a.x,a.c)

#return 20 c
