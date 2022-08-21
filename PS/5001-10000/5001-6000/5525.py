import sys
input = sys.stdin.readline

n = int(input())
length = int(input())
s = input()
ans, idx, cnt = 0, 0, 0

while idx < length - 1:
  if s[idx : idx + 3] == "IOI":
    idx += 2
    cnt += 1
    if cnt == n:
      ans += 1
      cnt -= 1
  else:
    idx += 1
    cnt = 0
    
print(ans)