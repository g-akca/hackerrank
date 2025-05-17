if __name__ == '__main__':
    s = input()
    
    alnum = any(c.isalnum() for c in s)
    alpha = any(c.isalpha() for c in s)
    digit = any(c.isdigit() for c in s)
    lower = any(c.islower() for c in s)
    upper = any(c.isupper() for c in s)
    
    print(alnum)
    print(alpha)
    print(digit)
    print(lower)
    print(upper)
