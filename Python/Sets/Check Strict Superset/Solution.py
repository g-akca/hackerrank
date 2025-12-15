# Enter your code here. Read input from STDIN. Print output to STDOUT

A = set(map(int, input().split()))
flag = True
for _ in range(int(input())):
    B = set(map(int, input().split()))
    if not A.issuperset(B) or A == B:
        flag = False
        
print(flag)
