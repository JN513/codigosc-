import pandas as pd

# dataframe panda, a partir de uma lista

carros = ["palio", "Passat", "Crossfox"]

print(pd.Series(carros))

# dataframe panda, a partir de uma lista de dicionarios

dados = [
    {"Nome": "Julio", "Idade": 15},
    {"Nome": "Glaucia", "Idade": 15},
    {"Nome": "Luisa", "Idade": 16},
]

dataset = pd.DataFrame(dados)
print(dataset)
