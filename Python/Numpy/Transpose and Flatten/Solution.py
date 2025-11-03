import numpy

N, _ = map(int, input().split())
arr = []
for _ in range(N):
    arr.append(list(map(int, input().split())))

arr = numpy.array(arr)
print(numpy.transpose(arr), arr.flatten(), sep = "\n")
