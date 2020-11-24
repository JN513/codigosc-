a = int(input())
b = int(input())
c = int(input())

l = [a,b,c]
l.sort()

r = 3

if l[0] + l[1] < l[2]:
    r = 1
else:
    for i in range(2):
        if l[i] < l[i+1]:
            r -= 1

print(r)