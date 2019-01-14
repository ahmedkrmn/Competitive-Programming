def merge_and_sort(lst):
    if len(lst) == 1:
        return 0, lst
    (right_counter, lst_1) = merge_and_sort(lst[:len(lst) // 2])
    (left_counter, lst_2) = merge_and_sort(lst[len(lst) // 2:])
    (split_counter, lst) = count_splits(lst_1, lst_2)
    return (right_counter + left_counter + split_counter, lst)


def count_splits(lst_1, lst_2):
    counter, p_1, p_2 = 0, 0, 0
    lst=[]
    for i in range(len(lst_1)+len(lst_2)):
        if p_1 < len(lst_1) and (p_2 == len(lst_2) or lst_1[p_1] <= lst_2[p_2]):
            lst.append(lst_1[p_1])
            p_1 += 1
        else:
            lst.append(lst_2[p_2])
            p_2 += 1
            counter += len(lst_1) - p_1
    return (counter, lst)


def main():
    testcases = int(input())
    for i in range (testcases):
        input()
        size = int(input())
        lst = []
        for i in range(size):
            temp = int(input())
            lst.append(temp)
        print(merge_and_sort(lst)[0])


if __name__ == '__main__':
    main()
