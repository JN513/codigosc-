# coding: utf-8

matriz = [list(map(int, input().split())) for i in range(3)]
soma = 0

for i in range(3):
  if (matriz[i][0] == 0) + (matriz[i][1] == 0) + (matriz[i][2] == 0) == 0:
    soma = matriz[i][0] + matriz[i][1] + matriz[i][2]
    
for j in range(3):
  if (matriz[0][j] == 0) + (matriz[1][j] == 0) + (matriz[2][j] == 0) == 0:
    soma = matriz[0][j] + matriz[1][j] + matriz[2][j]
    
if (matriz[0][0] == 0) + (matriz[1][1] == 0) + (matriz[2][2] == 0) == 0:
  soma = matriz[0][0] + matriz[1][1] + matriz[2][2]
  
if (matriz[0][2] == 0) + (matriz[1][1] == 0) + (matriz[2][0] == 0) == 0:
  soma = matriz[0][2] + matriz[1][1] + matriz[2][0]
  
if soma == 0:
  for i in range(3):
    for j in range(3):
      soma += matriz[i][j]
      
  soma //= 2
  
for k in range(3):
  for i in range(3):
    for j in range(3):
      if matriz[i][j] == 0 and (matriz[i][0] == 0) + (matriz[i][1] == 0) + (matriz[i][2] == 0) == 1:
        matriz[i][j] = soma - matriz[i][0] - matriz[i][1] - matriz[i][2]
        
      if matriz[i][j] == 0 and (matriz[0][j] == 0) + (matriz[1][j] == 0) + (matriz[2][j] == 0) == 1:
        matriz[i][j] = soma - matriz[0][j] - matriz[1][j] - matriz[2][j]
        
for i in range(3):
  print(*matriz[i], sep=' ')