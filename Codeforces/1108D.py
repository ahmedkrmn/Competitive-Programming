def conflict(s, i, f, b, c):
    if b == 0:
        if f == 0:
            return 0
        if f == 1:
            return int(c == s[i + 1])
    if b == 1:
        if f == 0:
            return int(c == s[i - 1])
        if f == 1:
            return int(c == s[i - 1]) + int(c == s[i + 1])


def main():
    n = int(input())
    s = [c for c in input()]
    counter, prev_conf = 0, 0
    for i in range(0, n):
        b = 0 if i == 0 else 1
        f = 0 if i == n-1 else 1
        conf = conflict(s, i, f, b, s[i])
        l = ['R', 'G', 'B']
        if conf == 0 and prev_conf == 0:
            continue
        elif prev_conf == 1 and (conf == 0 or s[i] != s[i-1]):
            l.remove(s[i])
            l.remove(s[i-1])
            s[i-1] = l[0]
            counter += 1
            prev_conf = 0
        elif conf == 1 and i != n-1:
            prev_conf = 1
        else:
            l.remove(s[i])
            s[i] = l[0]
            counter += 1
            prev_conf = 0
    print(str(counter) + '\n' + ''.join(s))


if __name__ == '__main__':
    main()