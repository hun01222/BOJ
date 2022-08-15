while True:
  try:
    n = int(input())
  except:
    break
    
  num, ans = 0, 0
  while True:
    num += int(pow(10, ans))
    if num % n == 0:
      break
    ans += 1
  print(ans + 1)