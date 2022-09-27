def eh_primo(x):
    for i in range(2, int(x/2)+1):
        if x % i == 0:
            return False
    
    return True

x = int(input())
if eh_primo(x):
	print('S')
else:
	print('N')
