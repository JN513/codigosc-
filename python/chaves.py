a = int(input())

li = []

for _ in range(a):
    s = input()
    li.append(s)

f = []
r = 1


for s in li:
    for c in s:
        if c == '{':
            f.append('{')
        elif  c == '}':
            if '{' in f:
                f.pop(len(f)-1)
            else:
                r = 0

if '{' in f: 
    r = 0

if r == 0:
    print('N')
else:
    print('S')