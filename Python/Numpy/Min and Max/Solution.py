import numpy

N, M = map(int , input().split())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))

print(numpy.max(numpy.min(numpy.array(arr), axis = 1)))
