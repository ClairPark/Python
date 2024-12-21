Total = int(input())
x = int(input())
k = 0

for i in range (1, x+1):
    a, b = map(int, input().split( ))
    k += a*b

if Total == k:
    print ("Yes")
else:
    print ("No")