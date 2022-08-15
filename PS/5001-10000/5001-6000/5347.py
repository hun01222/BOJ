def GCD(a, b):
  if a%b == 0:
  	return b
  return GCD(b, a%b)

n = int(input())
for _ in range(n):
  a, b = map(int, input().split(' '))
  print(int(a * b / GCD(a, b)))