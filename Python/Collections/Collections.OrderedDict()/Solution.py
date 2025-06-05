# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import OrderedDict

N = int(input())
d = OrderedDict()
for i in range(0, N):
    a = input().rpartition(" ")
    if d.get(a[0]):
        d[a[0]] += int(a[2])
    else:
        d[a[0]] = int(a[2])
        

for key, val in d.items():
    print(key, val)
