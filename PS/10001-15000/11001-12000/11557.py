t = int(input())

for _ in range(t):
  n = int(input())
  li = []
  
  for _ in range(n):
    s, l = map(str, input().split())
    li.append([s, int(l)])
  
  li = sorted(li, key = lambda x : x[1])
  print(li[-1][0])