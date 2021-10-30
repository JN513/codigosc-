n = int(input())

v = list()

for _ in range(n):
    v.append(input())

r = 0

ans = 0

for i in range(n):
    for j in range(i+1, n):
        if i == j:
            continue

        if v[j] in v[i]:
            ans += 1

        if v[i] in v[j]:
            ans += 1
        
    r += ans
    ans = 0

print(r)