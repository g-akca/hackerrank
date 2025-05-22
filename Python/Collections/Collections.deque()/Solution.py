# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import deque

d = deque()
N = int(input())
for i in range(0, N):
    method = input().split()
    if (method[0] == 'append'):
        d.append(int(method[1]))
    elif (method[0] == 'pop'):
        d.pop()
    elif (method[0] == 'popleft'):
        d.popleft()
    else:
        d.appendleft(int(method[1]))

print(*d)
