M = int(input())
a = set(list(map(int, input().split())))
N = int(input())
b = set(list(map(int, input().split())))

inter = a.intersection(b)
a = (a.union(b)).difference(inter)
a = sorted(a)
[print(i) for i in a]
