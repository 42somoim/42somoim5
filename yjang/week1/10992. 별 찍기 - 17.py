n = int(input())

for i in range(1, n+1):
    if i == 1:
        print(' '*(n-i), '*', sep='')
    elif i == n:
        print('*'*((n-1)*2+1))
    else:
        print(' '*(n-i), '*', ' '*(i*2-3), '*', sep='')
