def GetDivisor(n):
  divisors_list = []
  
  for i in range(1, int(n**(1/2)) + 1):
    if n % i == 0:
      divisors_list.append(i)
      if i**2 != n:
        divisors_list.append(n // i)
  divisors_list.sort()
  
  return divisors_list


n = int(input())
ans = 0

for i in range(1, n + 1):
  ans += sum(GetDivisor(i))

print(ans)