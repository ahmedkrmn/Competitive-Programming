from collections import Counter
from sys import stdin, stdout


def all_equal(s, start, end):
    for i in range(start, end-1):
        if s[i] != s[i+1]:
            return i+1
    return -1


def main():
    n, k = [int(x) for x in stdin.readline().split()]
    s = stdin.readline()
    lis = []
    i = 0
    if k == 1:
        stdout.write(str(Counter(s).most_common(1)[0][1]))
        return
    while i < n:
        if i+k > n:
            break
        is_equal = all_equal(s, i, i + k)
        if is_equal == -1:
            lis.append(s[i])
            i += k
        else:
            i = is_equal
    counter = Counter(lis)
    res = 0 if len(counter) == 0 else counter.most_common(1)[0][1]
    stdout.write(str(res))
    return

if __name__ == "__main__":
    main()
