nome = input("digite seu nome: \n")
numero = input("ola coloca seu numero: \n")

tam = len(nome)

if tam <= 5:
    print(
        f"seu nome: {nome} e normal, ele tem {tam} caracteres e seu numero e {numero}"
    )
elif tam <= 10:
    print(
        f"seu nome: {nome} e grande, ele tem {tam} caracteres e seu numero e {numero}",
        end=":",
    )
else:
    print(
        f"seu nome: {nome} e inormal, ele tem {tam} caracteres e seu numero e {numero}",
        end=" ",
    )
