n = int(input())
li = []

for _ in range(n):
  n, d, m, y = map(str, input().split())
  li.append([int(y), int(m), int(d), n])
  
li.sort()

print(li[-1][3])
print(li[0][3])