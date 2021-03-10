import pandas as pd

datas = pd.date_range(start='2021-12-21', end='2021-01-01', periods=525600)

resul = 0

for i in datas:
    if i.day == i.hour and i.month == i.minute:
        resul += 1
    elif i.day == i.minute and i.hour == i.month:
        resul += 1

print(resul)