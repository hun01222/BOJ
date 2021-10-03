def hansu(n):
    a = list(str(n))
    if len(a) == 1:
        return 1
    gap = int(a[1])-int(a[0])
    for i in range(0, len(a)-1):
        if int(a[i+1])-int(a[i]) != gap:
            return 0
    return 1


cnt = 0
n = int(input())
for i in range(1, n+1):
    cnt += hansu(i)
print(cnt)
