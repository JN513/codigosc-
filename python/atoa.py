print("Hello Word!")
print("digite seu nome:", end="")

nome = input()

tam_nome = len(nome)

if tam_nome <= 5:
    print(f'seu nome e normal, ele tem {tam_nome} caracteres')
elif tam_nome > 5 and tam_nome < 10:
    print(f"seu nome e complido , ele tem {tam_nome} caracteres")
else:
    print('insira um nome valido')

'''print(f"seu nome e {nome} e tem {tem_nome} letras!\
    (contando com os espaços)")'''