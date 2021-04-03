n = int(input())

a , b, c, d, e = 0, 0, 0, 0, 0

for _ in range(n):
    en = input().split(" ")
    if en[1] == "A":
        d += 1
    elif en[1] == "E":
        c += 1
    elif en[1] == "H":
        b += 1
    elif en[1] == "M":
        e += 1
    elif en[1] == "X":
        a += 1

print(f"{a} Hobbit(s)\n{b} Humano(s)\n{c} Elfo(s)\n{d} Anao(s)\n{e} Mago(s)")