a, b = map(int, input().split())
c = [0] * a

for i in range (0, a):
    c[i] = i+1

for i in range (0, b):
    a, b = map(int, input().split())
    t = c[a-1]
    c[a-1] = c[b-1]
    c[b-1] = t

print(*c)