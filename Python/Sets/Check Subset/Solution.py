# Enter your code here. Read input from STDIN. Print output to STDOUT

T = int(input())
for i in range(T):
    _ = int(input())
    A = set(input().split())
    _ = int(input())
    B = set(input().split())
    if A.intersection(B) == A:
        print("True")
    else:
        print("False")
