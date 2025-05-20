def print_formatted(number):
    width = len(bin(number)) - 2
    for i in range(1, number + 1):
        print("{:>{w}}".format(str(i), w=width), end=" ")
        print("{:>{w}}".format(str(oct(i))[2:], w=width), end=" ")
        print("{:>{w}}".format(str(hex(i)).upper()[2:], w=width), end=" ")
        print("{:>{w}}".format(str(bin(i))[2:], w=width))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)