z = input()

def e_vogal(a: str) -> bool:
    return a == "a" or a == "e" or a == "i" or a == "o" or a == "u"

def vogal_mp(a: str) -> str:
    al = "abcdefghijklmnopqrstuvwxyz"
    p = 0
    an = 30
    dp = 30
    for i, x in enumerate(al):
        if x == a:
            p = i
            break

    for i in range(p, -1, -1):
        if e_vogal(al[i]):
            an = i
            break
    
    for i in range(p, len(al)):
        if e_vogal(al[i]):
            dp = i
            break

    if (p-an) <= dp - p:
        return al[an]
    else: 
        return al[dp]

r = ""

def cons_mp(a: str) -> str:
    al = "abcdefghijklmnopqrstuvwxyz"
    p = 00
    for i, x in enumerate(al):
        if x == a:
            p = i
            break

    for i in range(p+1, len(al)):
        if not e_vogal(al[i]):
            return al[i]

for i in z:
    if  e_vogal(i):
        r += i

    elif i == "z":
        r += i
        r += vogal_mp(i)
        r += i
    else:
        r += i
        r += vogal_mp(i)
        r += cons_mp(i)

print(r)
