t = int(input())
for _ in range(t):
    n = int(input())
    ans = 0
    for i in range(1, n+1):
        cal = mx = 0
        for j in range(1, i):
            cal += (j*j)
            mx = max(mx, j*j)
        k = n
        for j in range(i, n+1):
            cal += (j*k)
            mx = max(mx, j*k)
            k -= 1
        cal -= mx
        ans = max(ans, cal)
    print(ans)
