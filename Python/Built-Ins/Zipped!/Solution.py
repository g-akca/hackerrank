# Enter your code here. Read input from STDIN. Print output to STDOUT

N, X = map(int, input().split())
sheet = []
for i in range(X):
    sheet.append(map(float, input().split())) 

sheet = list(zip(*sheet))
for i in range(N):
    print(sum(sheet[i]) / X)
