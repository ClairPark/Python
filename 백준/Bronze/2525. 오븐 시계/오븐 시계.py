a, b = map(int, input().split( ))
c = int(input())

Hour = a+(c//60)
Minute = b+(c%60)

if Minute>=60:
    Hour += 1
    Minute -= 60

if Hour>=24:
    Hour -= 24

print (Hour, Minute)