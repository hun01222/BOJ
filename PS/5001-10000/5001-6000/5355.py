t = int(input())

for _ in range(t):
  a = list(input().split(' '))
  ans = float(a.pop(0))
  for i in a:
    if i == '@':
      ans *= 3
    elif i == '%':
      ans += 5
    elif i == '#':
      ans -= 7
  print("%0.2f" % ans)