n = int(input())

for i in range(1, n*2):
    if i <= n:
        print(' '*(i-1), '*'*(n*2 - i*2 + 1), sep='')
    else:
        print(' '*(n*2 - i - 1), '*'*(i*2 - n*2 + 1), sep='')
