cube = lambda x: pow(x, 3)

def fibonacci(n):
    res = [0, 1]
    for i in range(2, n):
        res.append(res[i - 2] + res[i - 1])
    return res[0:n]
