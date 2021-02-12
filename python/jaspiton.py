t = int(input())

for _ in range(t):
    m, n = map(int, input().split())

    dic = {}

    for _ in range(m):
        key = input()
        val = input()

        dic[key] = val

    for _ in range(n):
        frase = input().split()
        for i in range(len(frase)):
            if frase[i] in dic:
                frase[i] = dic[frase[i]]

        print(" ".join(frase))

    print()