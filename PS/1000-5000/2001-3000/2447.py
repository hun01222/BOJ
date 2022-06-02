def star(n):
    if n == 1:
        print('***')
        print('* *')
        print('***')
    else:
        print(star(n-1), star(n-1), star(n-1))
        print(star(n-1), ' ', star(n-1))
        print(star(n-1), star(n-1), star(n-1))


n = int(input())
star(n)
