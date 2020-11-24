v = input().split(" ")
s = input().split(" ")

r = 0

for c in v:
    if c in s:
        r += 1

if r == 3:
    print('terno')
elif r == 4:
    print('quadra')
elif r == 5:
    print('quina')
elif r == 6:
    print('sena')
else:
    print('azar')
