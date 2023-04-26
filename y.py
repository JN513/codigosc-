par = 0
for i in list(map(int, input().split())): 
    if i % 2 == 0: par += 1
print(f"par: {par}, impar: {10-par}")

"""
par = 0

for _ in range(10):
    if int(input()) % 2 == 0:
        par += 1

print(f"par: {par}, impar: {10-par}")
"""