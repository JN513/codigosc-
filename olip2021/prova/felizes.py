def efeliz(value):
    repeat = []

    while value > 1 and not value in repeat:
        result = 0

        repeat.append(value)

        for i in str(value):
            result += int(i)**2

        value = result

    return value == 1

n = int(input())
v = map(int, input().split(" "))

r = 0

for i in v:
    if efeliz(i):
        r += 1

print(r)