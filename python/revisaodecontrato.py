a, b = input().split(" ")
r = []

while a != '0' and b != 0:
    b = b.replace(a, "")
    r.append(b)
    a, b = input().split(" ")

for i in r:
    if i == '':
        print('0')
    else:
        print(int(i))