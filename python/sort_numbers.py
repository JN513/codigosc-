from random import randint

a = [1907, 3058, 3052, 3051, 3048, 3063, 3056, 2836, 2837, 2831, 2830, 2784, 2787, 2786, 2780, 2429, 2440, 2450, 2455, 2468, 2453, 2428, 2435, 2437]

result = []

while len(result) != 24:
    r = randint(0, 23)
    if r not in result:
        result.append(r)


print(result)

order = list()

for i in result:
    order.append(a[i])

ca = order[:12]
cb = order[12:]

print(order)
print(ca)
print(cb)