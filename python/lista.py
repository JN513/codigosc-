lista = []

lista.append("batman")
lista.append("atoa")
lista.append("iii")

lista2 = lista.copy()
lista3 = lista[:]

lista2.append("batgirl")

print("lista")

pop = lista.sort()

for el in range(0, 3):
    print(lista2[el])

print(pop)
print(lista3)
print("2")
print(lista2)

lista_num = ["1", "2", "3", "4"]

lista_really_num = [int(el) for el in lista_num]

print(lista_really_num)

for el in lista2:
    print(el)
