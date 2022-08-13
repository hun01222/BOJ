ans = 0

for _ in range(int(input())):
  a, b, c = map(int, input().split())
  if a == b == c:
    ans = max(10000 + a * 1000, ans)
  elif a == b or b == c:
    ans = max(1000 + b * 100, ans)
  elif a == c:
    ans = max(1000 + a * 100, ans)
  else:
    ans = max(max(a, b, c) * 100, ans)
  
print(ans)