import numpy

coeffs = list(map(float, input().split()))
x = int(input())

print(numpy.polyval(coeffs, x))
