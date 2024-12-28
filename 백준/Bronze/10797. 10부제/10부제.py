a = int(input())
b = list(map(int, input().split( )))
c = len(b)
d = 0

for i in range (0, c):
    if b[i] % 10 == a:
        d += 1

print (d)