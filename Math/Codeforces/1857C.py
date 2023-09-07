t = int(input())
for _ in range(t):
  n = int(input())
  m = (n * (n - 1)) // 2;
  lst = list(map(int, input().split()))
  lst.sort()
  i = 0
  while i < m:
    print(lst[i], end = " ")
    n -= 1
    i += n
  print(lst[-1])