en = input().split(" ")

max = int(en[0])
min = int(en[1])

p30 = (max / 100) * 30

if p30 < min:
    print(0)
else:
    print(int(p30))
