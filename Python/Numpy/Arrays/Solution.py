import numpy

def arrays(arr):
    # complete this function
    # use numpy.array
    arr = numpy.array(arr[::-1], float)
    return arr

arr = input().strip().split(' ')
result = arrays(arr)
print(result)