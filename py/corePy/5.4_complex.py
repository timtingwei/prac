#complex.py

print (64.375+1j)
print (0+1j)
print (-.0233+0j)

aComplex = -8.333-1.47j
print (aComplex) #(-8.333-1.47j)
print (aComplex.real) #-8.333
print (aComplex.imag) #-1.47

#通过conjugate()调用共轭复数
print (aComplex.conjugate()) #(-8.333+1.47j)

print (5.0+aComplex+5)