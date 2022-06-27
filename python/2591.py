n = int(input())

for _ in range(n):
    s = input()

    v = s.split("k")

    a1 = 0
    a2 = 0

    for i in v[0]:
        if i == 'a':
            a1 += 1
    
    for i in v[1]:
        if i == 'a':
            a2 += 1

    print('k', end='')
    print('a' * (a1*a2))