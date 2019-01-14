k, n = [int(x) for x in input().split()]
pointers, indices = [], []
problems = [[int(x)]for x in input().split()]
for i in range(n):
    problems[i].append(i)
problems.sort()
prev, all_zeros = 0, False
for i in range(n):
    if problems[i][0] > prev + 1:
        all_zeros = True
        break
    if problems[i][0] > prev:
        pointers.append(i)
        prev = problems[i][0]
if all_zeros or len(pointers) != k:
    print('0'*n)
else:
    increment, out_of_bound = 0, False
    while pointers[-1]+increment < n and not out_of_bound:
        out_of_bound, max_index = False, problems[increment][1]
        for i in range(1, k):  # no of pointers
            if not (problems[pointers[i]+increment][0] == problems[pointers[i-1]+increment][0]+1):
                out_of_bound = True
                break
            max_index = max(max_index, problems[pointers[i]+increment][1])
        if not out_of_bound:
            indices.append(max_index)
        increment += 1
    index = 0
    for i in range(n):
        if index < len(indices) and indices[index] == i:
            print('1', end='')
            index += 1
        else:
            print('0', end='')
