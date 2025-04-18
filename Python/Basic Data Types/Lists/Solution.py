if __name__ == '__main__':
    N = int(input())
    
    arr = []
    for a in range(0, N):
        op = input().split()
        
        if op[0] == "insert":
            arr.insert(int(op[1]), int(op[2]))
        elif op[0] == "print":
            print(arr)
        elif op[0] == "remove":
            arr.remove(int(op[1]))
        elif op[0] == "append":
            arr.append(int(op[1]))
        elif op[0] == "sort":
            arr.sort()
        elif op[0] == "pop":
            arr.pop()
        else:
            arr.reverse()
