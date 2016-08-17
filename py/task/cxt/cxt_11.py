#cxt_11.py

#兔子的规律为1,1,2,3,5,8,13,21...

#///输出fibonacci数列
def fibonacci(a,b,num):
    """
    series = []
    while num>0:
        series.append(a)
        series.append(b)
        num-=1
        return fibonacci(b,a+b,num)
    """
    series = []
    series.append(a)
    series.append(b)
    while num>0:
        series.append(a+b)
        num-=1
        a ,b = b,a+b
    return series

print (fibonacci(1,1,9))
