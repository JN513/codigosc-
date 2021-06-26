linha = input().split(" ")

a, b, c = linha
a1, c1 = "", ""

for i in range(len(a)):
    if a[i] == "7":
        a1 += "0"
    else:
        a1 += a[i]

for i in range(len(c)):
    if c[i] == "7":
        c1 += "0"
    else:
        c1 += c[i]

a = int(a1)
c = int(c1)

if b == "+":
    print(int(str(a+c).replace("7","0")))
elif b == "-":
    print(int(str(a-c).replace("7","0")))
elif b == "x":
    print(int(str(a*c).replace("7","0")))
elif b == "/":
    print(int(str(a/c).replace("7","0")))
elif b == "%":
    print(int(str(a%c).replace("7","0")))