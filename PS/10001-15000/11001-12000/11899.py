s = input()

arr = []

for i in range(len(s)):
  arr.append(s[i])
  if len(arr) > 1 and arr[-2] == '(' and arr[-1] == ')':
    arr.pop(-1)
    arr.pop(-1)
    
print(len(arr))