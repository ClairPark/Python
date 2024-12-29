a, b = map(int, input().split())
c = [0] * a

for i in range (0, a):
    c[i] = i+1

for i in range (0, b):
    e, f = map(int, input().split())
    temp = c[e-1: f]
    temp.reverse()
    c[e-1: f] = temp

print(*c)