x = int(input())

for i in range (x-1, -1, -1):
    print(str (" " * i) + str("*" * (2*(x-i)-1)))