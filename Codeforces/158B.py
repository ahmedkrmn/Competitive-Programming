n=int(input())
lst = [int(x) for x in input().split()]
lst.sort()
ptr1, ptr2, tempc, c = 0, len(lst)-1, 0, 0
while ptr2>=ptr1:
    tempc+=lst[ptr2]
    while ptr1<ptr2:
        if tempc+lst[ptr1]<=4:
            tempc+=lst[ptr1]
            ptr1+=1
        elif tempc+lst[ptr1]>4:
            c+=1
            tempc=0
            break
    ptr2-=1
if tempc>0: c+=1
print (c)