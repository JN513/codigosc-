cripto = input()
en = input()

al = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
]
de = []

r = ""

for i in range(26):
    de.append(cripto[i])

for c in en:
    for i in range(26):
        if de[i] == c:
            r += al[i]
            break

print(r)
