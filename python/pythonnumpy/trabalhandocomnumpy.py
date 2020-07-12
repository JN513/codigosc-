import numpy as np
#from numpy import loadtxt

km = np.loadtxt('carros-km.txt')
anos = np.loadtxt('carros-anos.txt', dtype=int)

kmmed = km/(2019-anos)

print(type(kmmed))
