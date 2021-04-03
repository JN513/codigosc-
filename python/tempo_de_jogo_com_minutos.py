from datetime import datetime

a = input().strip().split(" ")

a1 = "{}:{}".format(a[0],a[1])
a2 = "{}:{}".format(a[2],a[3])

t1 = datetime.strptime(str(a1), "%H:%M")
t2 = datetime.strptime(str(a2), "%H:%M")

t = (t2-t1).total_seconds()

h = int(t/3600)
m = int((t-(h*3600))/60)

if h == 0 and m == 0:
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(h, m))