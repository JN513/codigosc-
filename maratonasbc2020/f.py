s = input()

p1, g1, p2, g2, saca = 0,0,0,0,1

for i in s:
    if i == "S":
        if saca == 1:
            p1 += 1
            if p1 > 5 and (p1 >= p2+2 or p1 == 10):
                g1 += 1
                p1 = 0
                p2 = 0
        else:
            p2 += 1
            if p2 > 5 and (p2 >= p1+2 or p2 == 10):
                g2 += 1
                p1 = 0
                p2 = 0
    elif i == "R":
        if saca == 1:
            p2 += 1
            if p2 > 5 and (p2 >= p1+2 or p2 == 10):
                g2 += 1
                p1 = 0
                p2 = 0
            saca = 2
        else:
            p1 += 1
            if p1 > 5 and (p1 >= p2+2 or p1 == 10):
                g1 += 1
                p1 = 0
                p2 = 0
            saca = 1
    elif i == "Q":
        if g1 > g2 and g1 >= 2:
            print(f"{g2} - {g1} (winner)")
        elif g2 > g1 and g2 >= 2:
            print(f"{g2} (winner) - {g1}")
        else:
            if saca == 1:
                print(f"{g2} ({p2}) - {g1} ({p1}*)")
            if saca == 2:
                print(f"{g2} ({p2}*) - {g1} ({p1})")