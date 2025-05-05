def count_substring(string, sub_string):
    sum = 0
    for i in range(0, len(string)):
        if string[i:].startswith(sub_string):
            sum += 1
    return sum
