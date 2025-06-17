# Enter your code here. Read input from STDIN. Print output to STDOUT

_ = int(input())
eng = set(input().split())
_ = int(input())
fre = set(input().split())

print(len(eng.symmetric_difference(fre)))
