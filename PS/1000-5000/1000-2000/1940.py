n = int(input())
m = int(input())
li = list(map(int, input().split(' ')))
li.sort()

head, tail, ans = 0, n - 1, 0
while head < tail:
  if li[head] + li[tail] < m:
    head += 1
  elif li[head] + li[tail] > m:
    tail -= 1
  else:
    head +=1
    ans += 1
    
print(ans)