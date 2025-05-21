# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import namedtuple

N = int(input())
Student = namedtuple('Student', input().split())
avg = 0
for i in range(0, N):
    s = Student(*input().split())
    avg = avg + int(s.MARKS)
    
avg = avg / N
print(round(avg, 2))
