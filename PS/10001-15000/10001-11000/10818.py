n = int(input())
a = list(map(int, input().split()))

a.sort()
print(int(a[0]), int(a[n-1]))
