# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import combinations

S, k = input().split()
k = int(k)
S = sorted(S)
for i in range(k):
    for j in combinations(S, i + 1):
        print("".join(j))
