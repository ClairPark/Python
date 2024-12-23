a, b = map(int, input().split( ))
c = list(map(int, input().split()))
d = 0

for i in range(0, a):
    if c[i] < b:
        print(c[i], end=" ")