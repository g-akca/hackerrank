# Enter your code here. Read input from STDIN. Print output to STDOUT

count = int(input())
s = set()
for i in range(0, count):
    country = input()
    s.add(country)
    
print(len(s))
