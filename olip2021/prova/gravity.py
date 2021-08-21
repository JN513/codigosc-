N = int(input())

m = []

viradas1 = 0
viradas2 = 0
pos = 0
alt = 1


x = map(int, input().split(" "))
m.append(list(x))

x = map(int, input().split(" "))
m.append(list(x))

if(m[0][0] != 0):
    alt = m[0][0]
    for i in range(N - 1):
        i += 1
        if(m[pos][i] == 0):
            if(pos == 0):
                pos = 1
                viradas1 += 1
                alt = m[pos][i]
                continue
            if(pos == 1):
                pos = 0
                viradas1 += 1
                alt = m[pos][i]
                continue
        
        if(m[pos][i] > alt):
            pos = 1
            viradas1 += 1
            alt = m[pos][i]
            continue

        if(m[pos][i] < alt):
            alt = m[pos][i]
else:
    viradas1 = -1

pos = 1

if(m[1][0] != 0):
    alt = m[1][0]
    for i in range(N - 1):
        i += 1
        if(m[pos][i] == 0):
            if(pos == 0):
                pos = 1
                viradas2 += 1
                alt = m[pos][i]
                continue
            if(pos == 1):
                pos = 0
                viradas2 += 1
                alt = m[pos][i]
                continue

        if(m[pos][i] > alt):
            pos = 1
            viradas2 += 1
            alt = m[pos][i]
            continue
        
        if(m[pos][i] < alt):
            alt = m[pos][i]
else:
    viradas2 = -1

if(viradas1 == -1):
    print(viradas2)
elif(viradas2 == -1):
    print(viradas1)
else:
    if(viradas1 > viradas2):
        print(viradas2)
    else:
        print(viradas1)