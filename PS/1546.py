n = int(input())
a = list(map(int, input().split()))
c = 0

a.sort()
for i in range(n):
    c += a[i]*100/a[n-1]

print(c/n)
