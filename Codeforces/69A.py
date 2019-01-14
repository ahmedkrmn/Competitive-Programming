import sys
str, c0, c1 = input(), 0, 0
for c in str:
    if c == '1':
        c1, c0 = c1+1, 0 
    else:
        c0, c1 = c0+1, 0 
    if c0==7 or c1==7:
        print("YES")
        sys.exit()
print("NO")