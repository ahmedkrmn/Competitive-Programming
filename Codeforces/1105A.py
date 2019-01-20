from sys import stdin, stdout, maxsize


def main():
    stdin.readline()
    lst = [int(x) for x in stdin.readline().split()]
    min_sum, average = maxsize, 0
    for i in range(1, 101):
        summ = 0
        for item in lst:
            summ += min(abs(item - i + 1), min(abs(item - i - 1), abs(item - i)))
        if summ < min_sum:
            min_sum = summ
            average = i
    stdout.write(str(average)+" "+str(min_sum))


if __name__ == '__main__':
    main()
