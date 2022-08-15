from itertools import combinations, product

ans = []
idx = [[1, 0], [-1, 0], [0, 1], [0, -1]]
n, m, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]

all_combi = combinations(product([x for x in range(n)],
                                 [y for y in range(m)]), k)


for combi in all_combi:
  temp_ans = 0
  near = False
  for i, j in combi:
    for idx_i, idx_j in idx:
      if (i + idx_i, j + idx_j) in combi:
        near = True
        break
    if near:
      break
    else:
      temp_ans += arr[i][j]
  if not near:
    ans.append(temp_ans)
    
print(max(ans))