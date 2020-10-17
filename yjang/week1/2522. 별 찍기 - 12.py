n = int(input())

for i in range(1, n*2):
    if i <= n:
        print(' '*(n-i), '*'*i, sep='')
    else:
        print(' '*(i-n), '*'*(n*2-i), sep='')
