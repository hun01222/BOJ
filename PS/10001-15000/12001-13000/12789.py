import sys

n = int(input())
arr = list(map(int, input().split(' ')))
temp = []
cnt = 1

while not len(arr) == 0:
  if arr[0] == cnt:
    cnt += 1
    arr.pop(0)
  elif len(temp) == 0 or (temp[-1] > arr[0]):
    temp.append(arr[0])
    arr.pop(0)
  elif temp[-1] == cnt:
    cnt += 1
    temp.pop(-1)
  else:
    print("Sad")
    sys.exit(0)

if cnt == 1:
  print("Sad")
  sys.exit(0)
print("Nice")