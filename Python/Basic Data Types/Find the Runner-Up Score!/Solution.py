if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    
    max_score = max(arr)
    runner_up = max([a for a in arr if a < max_score])
    
    print(runner_up)
