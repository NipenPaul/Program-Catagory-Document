t = int(input())
for _ in range(t):
    n = int(input())
    lst = list(map(int, input().split()))
    lst.sort()
    if lst[0] == lst[n-1]:
        print(-1)
    else:
        cnt = 0
        for i in range(n):
            if lst[0] == lst[i]:
                cnt += 1
        print(f"{cnt} {n-cnt}")
        for i in range(n):
            if lst[0] == lst[i]:
                print(lst[i], end=" ")
        print()
        for i in range(n):
            if lst[0] != lst[i]:
                print(lst[i], end=" ")
        print()
