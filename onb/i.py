s = input()

f = float(s)

s = s.split(".")

p = float(s[1])

if p/(f*f) <= 24.9 and p/(f*f) >= 18.5:
    print("Sim")
else:
    print("Não")