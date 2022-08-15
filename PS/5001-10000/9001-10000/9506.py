while True:
  n = int(input())
  if n == -1:
    break
  
  li = []
  for i in range(1, n):
    if n % i == 0:
      li.append(i)
  
  if sum(li) == n:
    print(n, '=', " + ".join(str(i) for i in li))
  else:
    print(n, "is NOT perfect.")