a, b = map(int, input().split( ))
c = [0] * a
    
for i in range (0, b):
    d, e, f = list(map(int, input().split( )))
    for j in range (d-1, e):
        c[j] = f

print (*c)