pontos = []
jogadores_impar = 0
maior_pontuacao = -1
valor_empate = 0
jogadores = int(input())
numeros_magicos = input().split()
intervalos = input().split()
if jogadores % 2 != 0:
    jogadores_impar = 1
    for i in range(jogadores):
        if i < jogadores // 2 + jogadores_impar:
            pontos.append(
                int(numeros_magicos[i])
                * (int(intervalos[2 * i + 1]) - int(intervalos[2 * i]))
            )
        else:
            pontos.append(
                int(numeros_magicos[i])
                + int(intervalos[2 * i + 1])
                - int(intervalos[2 * i])
            )
            for i in range(0, len(pontos)):
                if pontos[i] > maior_pontuacao:
                    jogador_vencedor = i + 1
                    maior_pontuacao = pontos[i]
                elif pontos[i] == maior_pontuacao:
                    valor_empate = pontos[i]
                    if valor_empate == maior_pontuacao:
                        print("Rodada de cerveja para todos os jogadores!")
                    else:
                        print(
                            f"O jogador número {jogador_vencedor} vai receber o melhor bolo da cidade pois venceu com {maior_pontuacao} ponto(s)!"
                        )
