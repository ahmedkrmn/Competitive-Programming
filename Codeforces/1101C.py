t = int(input())
for i in range(t):
    n, intersections, curr_group = int(input()), 0, 1
    l = [[[int(x) for x in input().split()],i,curr_group] for i in range(n)]
    l.sort(key = lambda x: x[0])
    current_group_max = l[0][0][1]
    for i in range(1,n):
        if current_group_max >= l[i][0][0]: 
            intersections+=1
        else: curr_group = (curr_group%2)+1
        l[i][2]=curr_group
        current_group_max = max(current_group_max, l[i][0][1])
    if intersections == n-1: print(-1)
    else:
          l.sort(key = lambda x: x[1])
          print(' '.join([str(i[2]) for i in l]))