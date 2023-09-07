t = int(input())
for _ in range(t):
  n = int(input())
  lst = list(map(int, input().split()))
  sum = 0
  for x in lst:
    sum += x
  if sum & 1:
    print("NO")
  else:
    print("YES")