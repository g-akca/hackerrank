# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

_ = int(input())
sizes = Counter(map(int, input().split()))
N = int(input())
total = 0

for _ in range(N):
    size, price = map(int, input().split())
    if sizes[size] > 0:
        total += price
        sizes[size] -= 1
        
print(total)
