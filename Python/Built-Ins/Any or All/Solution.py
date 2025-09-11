# Enter your code here. Read input from STDIN. Print output to STDOUT

N, nums = int(input()), input().split()
print((all([int(i) > 0 for i in nums]) and any([j == j[::-1] for j in nums])))
