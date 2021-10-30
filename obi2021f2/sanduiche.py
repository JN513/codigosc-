import itertools

n, m = map(int, input().split())

amigos = [[ i for i in range(1, n+1)] for _ in range(n+1)]

#print(amigos)

for _ in range(m):
    a, b = map(int, input().split())

    amigos[a].remove(b)
    amigos[b].remove(a)

comb = []    

if m == 0:

    for k in range(1, len(amigos)):
        for i in range(1, len(amigos[k])+1):
            temp = list(itertools.combinations(amigos[k], i))

            if not temp in comb:
                comb.append(temp)

else:

    for i in range(1,len(amigos[1])+1):
        temp = list(itertools.combinations(amigos[1], i))
        
        comb.append(temp)

r = 0

for x in comb:
    #print(x)
    r += len(x)

print(r)