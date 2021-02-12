n = int(input())
fila = map(int, input().split(" "))
x = int(input())
removidos = map(int, input().split(" "))

rs = list()

for i in fila:
    if not i in removidos:
        rs.append(i)

for r in rs:
    print(r, end=" ")

print("")