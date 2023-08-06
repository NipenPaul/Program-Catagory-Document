t = int(input())
for _ in range(t):
  n = int(input())
  lst = list(map(int, input().split()))
  maxLen = -1
  for i in range(n-1, 0, -1):
    if lst[i] < lst[i-1]:
      maxLen = i
      break
  ans = 0
  for i in range(0, maxLen):
    ans = max(lst[i], ans)
  print(ans)
