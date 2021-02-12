import numpy as np

# from numpy import loadtxt

km = np.loadtxt("python/pythonnumpy/carros-km.txt")
anos = np.loadtxt("python/pythonnumpy/carros-anos.txt", dtype=int)

# kmmed = km/(2019-anos)

# print(kmmed)

km2 = np.array([44410.0, 5712.0, 37123.0, 0.0, 25757.0])
anos2 = np.array([2003, 1991, 1990, 2019, 2006])

idade = 2020 - anos2

print(idade)

kmporano = km2 / idade

print(kmporano)

dados = np.array([km2, anos2])

print(dados)

print(dados.shape)

print(dados[0])
print(dados[0][0])

kmmedia = dados[0] / (2020 - dados[1])

print(kmmedia)
