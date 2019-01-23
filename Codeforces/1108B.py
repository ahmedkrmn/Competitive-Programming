n = int(input())
l = input()
l = sorted([int(x) for x in l.split()])
no1, prev, no2 = l[-1], l[-1], 0
for i in range(n-2, -1, -1):
    if no1 % l[i] or ((not no1 % l[i]) and l[i] == prev):
        no2 = l[i]
        break
    prev = l[i]
print(str(no1) + " " + str(no2))