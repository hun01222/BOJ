a = list(input())
curr = a.pop(0)
ans = 10

for i in a:
  if curr == i:
    ans += 5
  else:
    ans += 10
    curr = i
    
print(ans)