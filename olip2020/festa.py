def birthday(n,x):
    p = (1.0/x)**n
    for i in range((x+1-n),x+1):
        p *= i
    return 1-p

x = input()
n= input()

x = float(x)
n = float(n)

print(birthday(n,x))
