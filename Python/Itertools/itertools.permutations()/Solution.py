# Enter your code here. Read input from STDIN. Print output to STDOUT

from itertools import permutations

S, k = input().split()
print(*["".join(i) for i in list(permutations(sorted(S), int(k)))], sep="\n")
