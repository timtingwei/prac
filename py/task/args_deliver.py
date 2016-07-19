

if __name__ == '__main__': #why use 'if there'?
    class Student:
        x = 0
        c = 0
    def f(stu):
        stu.x = 20 #Q:why a parameter has anattribute? A:stu is a class
        stu.c = 'c'

    a = Student()
    a.x = 3
    a.c = 'a'
    f(a)    #is f() is a method in this class?
    print (a.x,a.c)

#return 20 c


    def test_para(para):
        para.x = 5  #para is a class

    if __name__ == '__main__':
        b = test_para(a)
        print (a.x)
    #return 5