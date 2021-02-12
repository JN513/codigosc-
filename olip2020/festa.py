def birthday(n, x):
    p = (1.0 / x) ** n
    for i in range((x + 1 - n), x + 1):
        p *= i
    return 1 - p


b, a = input().split(" ")
b = int(b)
a = int(a)

print(round(birthday(a, b) * 100, 2))
