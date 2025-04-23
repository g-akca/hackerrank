if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    sum_score = sum([a for a in student_marks[query_name]])
    avg = sum_score / len(student_marks[query_name])
    
    print('%.2f' % avg)
