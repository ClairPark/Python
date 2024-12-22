a = int(input())
b = int(input())
k = 1
t = 0

for i in range (1, a):
    k = k*10

for i in range (1, a+1):
    t += (b//k)
    b -= ((b//k)*k)
    k = k//10

print (t)