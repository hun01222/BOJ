def check(s):
  a, b, c, d = 0, 0, 0, 0
  
  for i in range(len(s)):
    if 'a' <= s[i] <= 'z':
      a += 1
    elif 'A' <= s[i] <= 'Z':
      b += 1
    elif '0' <= s[i] <= '9':
      c += 1
    else:
      d += 1
  print(a, b, c, d)


while True:
  try:
    s = input()
    check(s)
  except:
    break