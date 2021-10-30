n = int(input())

v = list(map(int, input().split()))

ar = [0]

temp = 0

for i in v:
    temp += i

    ar.append(temp)

tam = ar[n]

comb = []

for i in range(2, tam):
    comb.append([int((tam-i)/2), int((tam-i)/2), i, i])

print(comb)