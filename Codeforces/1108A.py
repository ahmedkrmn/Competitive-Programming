q = int(input())
for i in range(q):
    l = input()
    l = [int(x) for x in l.split()]
    flag = False
    for i in range(2):
        for j in range(2, 4):
            if l[i] != l[j]:
                print(str(l[i]) + " " + str(l[j]))
                flag = True
                break
        if flag:
            break