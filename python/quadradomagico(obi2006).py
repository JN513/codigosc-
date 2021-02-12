line1 = map(int, input().split())
line2 = map(int, input().split())
line3 = map(int, input().split())

matriz = [line1, line2, line3]

sum = 0

if not 0 in matriz[0]:
    sum = matriz[0][0] + matriz[0][1] + matriz[0][2]
elif not 0 in matriz[1]:
    sum = matriz[1][0] + matriz[1][1] + matriz[1][2]
elif not 0 in matriz[2]:
    sum = matriz[2][0] + matriz[2][1] + matriz[2][2]

elif not 0 in [matriz[0][0],matriz[1][1],matriz[2][2]]: