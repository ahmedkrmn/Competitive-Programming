n = int(input())
s = input()
possibilities = ['RGB', 'RBG', 'GBR', 'GRB', 'BGR', 'BRG']
min_conflicts, winning_possibility = n, ''
for possibility in possibilities:
    conflicts, j = 0, 0
    for i in range(n):
        if possibility[j] != s[i]:
            conflicts += 1
        j = (j+1) % 3
    if conflicts < min_conflicts:
        min_conflicts = conflicts
        winning_possibility = possibility
print(str(min_conflicts)+'\n'+winning_possibility*(n//3)+winning_possibility[0:n % 3])