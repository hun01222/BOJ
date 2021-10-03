a = int(input())
b = int(input())
c = int(input())

# d = list(map(str, a*b*c))

d = a*b*c
e = list(str(d))

for i in range(10):
    print(e.count(str(i)))
