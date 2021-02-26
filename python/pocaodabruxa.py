from itertools import combinations

num, tam = map(int, input().split())

array = [i+1 for i in range(num)]
opcoes = list(combinations(array,tam))

for opcao in opcoes:
    print(*opcao)