li = []
dic_num = {
  'R' : 0,
  'B' : 0,
  'Y' : 0,
  'G' : 0,
}
dic_alpha = {
  
}
is_same = False
is_inc = False

for _ in range(5):
  a, b = map(str, input().split(' '))
  li.append([a, int(b)])
  dic_num[a] += 1
  
li.sort(key = lambda x : x[1])
if max(dic_num.values()) == 5:
  is_same = True
if (li[4][1] - li[3][1] == 1 and
    li[3][1] - li[2][1] == 1 and
    li[2][1] - li[1][1] == 1 and
    li[1][1] - li[0][1] == 1):
  is_inc = True

if is_same == True and is_inc == True:
  print(900 + li[4][1])
elif max(dic_num.values()) == 4:
  print(800 + max(dic_num, key = dic_num.get))
else:
  print(100 + li[4][1])