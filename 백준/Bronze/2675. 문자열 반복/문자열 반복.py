c = int(input())

for i in range (1, c+1):
    a, b = map(str, input().split( ))
    a = int(a)
    d = len(b)
    j = 0
    while j<d:
        print ((b[j])*a, end = "")
        j += 1
    print()