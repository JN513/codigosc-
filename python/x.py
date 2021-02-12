def busca_binaria(lista, elemento):
    minimo = 0
    maximo = len(lista) - 1

    while minimo <= maximo:
        meio_lista = (minimo + maximo) // 2
        if lista[meio_lista] == elemento:
            return True
        else:
            if elemento < lista[meio_lista]:
                maximo = meio_lista - 1
            else:
                minimo = meio_lista + 1
    return False


testelista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]

print(busca_binaria(testelista, 17))
