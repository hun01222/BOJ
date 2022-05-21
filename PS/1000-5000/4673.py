def d(n):
    c = 0
    a = list(str(n))
    for i in range(0, len(a)):
        c += int(a[i])
    return n+c


natual = set(range(1, 10001))
generated = set()

for n in range(1, 10001):
    while True:
        n = d(n)
        generated.add(n)
        if n > 10000:
            break

self = sorted(natual - generated)
for i in self:
    print(i)
