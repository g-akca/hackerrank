# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(input())
set1 = set(input().split())
b = int(input())
set2 = set(input().split())

print(len(set1.union(set2)))
