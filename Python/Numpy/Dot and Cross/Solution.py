import numpy

N = int(input())
a = []
b = []
for i in range(N):
    a.append(list(map(int, input().split())))
for i in range(N):
    b.append(list(map(int, input().split())))
print(numpy.dot(numpy.array(a), numpy.array(b)))
