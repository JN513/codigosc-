ss = input()

y, x = "", ""

le = ["a", "e", "i", "o", "u"]

for s in ss:
    if s in le:
        x += s

for i in range(len(ss) - 1, -1, -1):
    if ss[i] in le:
        y += ss[i]

if y == x:
    print("S")
else:
    print("N")
