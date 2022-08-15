def check(arr):
  n = len(arr)
  ans = 1
  
  for i in range(n):
    temp = 1
    for j in range(n - 1):
      if arr[i][j] == arr[i][j + 1]:
        temp += 1
      else:
        temp = 1
      ans = max(ans, temp)
    
    temp = 1
    for j in range(n - 1):
      if arr[j][i] == arr[j + 1][i]:
        temp += 1
      else:
        temp = 1
      ans = max(ans, temp)
    
  return ans
  
n = int(input())
arr = [list(input()) for _ in range(n)]
ans = 1

for i in range(n):
  for j in range(n - 1):
    arr[i][j], arr[i][j + 1] = arr[i][j + 1], arr[i][j]
    ans = max(ans, check(arr))
    arr[i][j], arr[i][j + 1] = arr[i][j + 1], arr[i][j]
    
    
    arr[j][i], arr[j + 1][i] = arr[j + 1][i], arr[j][i]
    ans = max(ans, check(arr))
    arr[j][i], arr[j + 1][i] = arr[j + 1][i], arr[j][i]
    
print(ans)