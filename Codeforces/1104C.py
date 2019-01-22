s, h, v = input(), 0, 1
for c in s:
    if c == "0":
        print(str(1) + " " + str(h+1))
        h = (h+1) % 4
    else:
        print(str(4) + " " + str(v))
        v = (v+2) % 4