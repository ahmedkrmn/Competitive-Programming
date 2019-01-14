import math
n = int(input())
for i in range (n):
    s = input()
    l,r,d = [int (x) for x in s.split()]
    if l/d > 1:
        print(d)
    else:
        print (d*(math.floor(r/d)+1))