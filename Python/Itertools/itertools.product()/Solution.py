# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import product

arr = map(int, input().split())
A = list(arr)
arr = map(int, input().split())
B = list(arr)

print(*product(A, B))
