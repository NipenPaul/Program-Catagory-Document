t = int(input())
for _ in range(t):
  n = int(input())
  lst_a = list(map(int, input().split()))
  lst_b = list(map(int, input().split()))
  lst = list()
  maxValue = int(-1e10)
  for i in range(n):
    diff = lst_a[i] - lst_b[i]
    lst.append(diff)
    maxValue = max(maxValue, diff)
  ans = list()
  for i in range(n):
    if maxValue == lst[i]:
      ans.append(i+1)
  print(len(ans))
  for x in ans:
    print(x, end = " ")
  print()