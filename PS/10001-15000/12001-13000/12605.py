n = int(input())

for i in range(n):
  s = input().split()
  print("Case #%d:" %(i + 1), ' '.join(s[::-1]))