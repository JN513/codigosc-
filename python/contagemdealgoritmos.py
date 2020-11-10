x = []

for _ in range(10):
    x.append(0)

n = int(input())

for _ in range(n):
    s = input()
    for i in s:
        x[int(i)] += 1

for i in range(len(x)):
    print(f"{i} - {x[i]}")