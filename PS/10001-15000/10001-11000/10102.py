n = int(input())

li = list(input())

a = b = 0

for i in range(0, len(li)):
  if li[i] == 'A':
    a+=1
  elif li[i] == 'B':
    b+=1
    
if a > b:
  print('A')
elif a < b:
  print('B')
else:
  print("Tie")