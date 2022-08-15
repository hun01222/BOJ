n = int(input())
m = int(input())
ans = abs(n - 100)
  
if m != 0:  
  arr = list(map(int, input().split()))
  
  for i in range(1000001):
    i = str(i)

    for j in range(len(i)):
      if int(i[j]) in arr:
        break

      elif j == len(i) - 1:
        ans = min(ans, abs(int(i) - n) + len(i))

  print(ans)
  
else:
  print(min(ans, len(str(n))))