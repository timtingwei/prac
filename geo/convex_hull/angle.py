#angle in clockwise
from math import sqrt

def get_angle(vec_a,vec_b):
    cos = vec_a[0]*vec_b[0] + vec_a[1]*vec_b[1]
    print 'cos:',cos
    return cos    

def normalizedVector(vector):
    s = sqrt(vector[0]*vector[0] + vector[1]*vector[1])
    return [vector[0]/s,vector[1]/s]

def main():
    vec_a = [0,-2]
    vec_b = [-1,-3]
    vec_a,vec_b = normalizedVector(vec_a),normalizedVector(vec_b)
    print vec_a,vec_b
    get_angle(vec_a,vec_b)

main()