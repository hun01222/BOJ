n, l = map(int, input().split(' '))
li = list(map(int, input().split(' ')))

li.sort()
ans = 0
while li:
  ans += 1
  while True:
    if len(li) == 1:
      li.pop(0)
      break
    elif li[1] - li[0] < l:
      li.pop(1)
    else:
      li.pop(0)
      break

print(ans)