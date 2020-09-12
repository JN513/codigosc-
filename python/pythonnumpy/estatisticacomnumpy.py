import numpy as np

km = np.loadtxt('python/pythonnumpy/carros-km.txt')
anos = np.loadtxt('python/pythonnumpy/carros-anos.txt', dtype=int)
valor = np.loadtxt('python/pythonnumpy/carros-valor.txt')
 
dataset = np.column_stack((anos, km, valor)) #faz uma matriz com eles cada coluna e um array
print(dataset)

print(np.mean(dataset, axis = 0))# media das colunas, o 0 faz com que ele tire das colunas a media

print(np.mean(dataset[:, 1])) #todas as linhas, mas so a coluna 1

print(dataset.sum(axis = 0)) # soamtorio das colunas, o 0 faz com que ele tire das colunas a media