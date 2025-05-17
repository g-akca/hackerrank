# Enter your code here. Read input from STDIN. Print output to STDOUT

N, M = map(int, input().split())

for i in range(N):
    if i < (N - 1) / 2:
        print((".|." * (2 * i + 1)).center(M, '-'))
    elif i == (N - 1) / 2:
        print(("WELCOME").center(M, '-'))
    else:
        print((".|." * (2 * (N - i) - 1)).center(M, '-'))
