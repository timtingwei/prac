
#python
def hailstone(n):
    length = 1
    while (n > 1):
        if n%2 == 0:  #n even
            n /= 2
        else:         #n old
            n = 3*n + 1
        length += 1
    return length

def main():
    l1 = hailstone(42)  #9
    l2 = hailstone(7)   #17 
    l3 = hailstone(27)  #112
    print l1
    print l2
    print l3
    print hailstone(1)

main()