t = int(input())
for _ in range(t):
  n = int(input())
  lst = list(map(int, input().split()))
  if n == 1:
    print("No")
    continue
  cnt = 0
  for i in range(n):
    if lst[i] == 1:
      cnt -= 1
    else:
      cnt += (lst[i]-1)
  if cnt >= 0:
    print("Yes")
  else:
    print("No")