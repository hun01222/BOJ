def swap(arr, i):
  if arr[i] == 0:
    arr[i] = 1
  else:
    arr[i] = 0

def man(arr, b):
  for i in range(b - 1, n, b):
    	swap(arr, i)
  return arr
  
def woman(arr, b):
  b -= 1
  swap(arr, b)
  ptr_a, ptr_b = b - 1, b + 1
  while (ptr_a >= 0) and (ptr_b < n):
    if arr[ptr_a] == arr[ptr_b]:
      swap(arr, ptr_a)
      swap(arr, ptr_b)
      ptr_a -= 1
      ptr_b += 1
    else:
      break
  return arr


global n
n = int(input())
arr = list(map(int, input().split()))
m = int(input())

for _ in range(m):
  a, b = map(int, input().split())
  if a == 1:
    arr = man(arr, b)
  else:
    arr = woman(arr, b)
    
for i in range(1, n + 1):
  print(arr[i - 1], end = ' ')
  if i % 20 == 0:
    print()