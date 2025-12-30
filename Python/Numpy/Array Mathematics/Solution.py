import numpy

N, _ = map(int, input().split())
A = []
B = []
for _ in range(N):
    A.append(list(map(int, input().split())))
for _ in range(N):
    B.append(list(map(int, input().split())))

print(numpy.add(A, B), numpy.subtract(A, B), numpy.multiply(A, B), numpy.floor_divide(A, B), numpy.mod(A, B), numpy.power(A, B), sep="\n")
