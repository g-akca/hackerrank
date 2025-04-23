if __name__ == '__main__':
    records = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])

    scores = [record[1] for record in records]
    lowest_score = min(scores)
    second_lowest_score = min([score for score in scores if score > lowest_score])
    second_lowest = [record[0] for record in records if record[1] == second_lowest_score]
    second_lowest.sort()
    
    for a in second_lowest:
        print(a)
