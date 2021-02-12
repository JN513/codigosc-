import pandas as pd

pd.set_option("display.max_rows", 100)  # se trocar rows por columns muda das colunas

dataset = pd.read_csv("python/pandas/db.csv", sep=";")

# print(dataset)
# print(dataset.dtypes) #tipo dos dados das colunas

a = dataset[["Quilometragem", "Valor"]].describe()  # descrição dos dados, estatisticas

print(a)
