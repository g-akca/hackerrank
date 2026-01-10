import numpy

N = int(input())
A = []
for i in range(N):
    A.append(list(map(float, input().split())))
    
print(round(numpy.linalg.det(A), 2))