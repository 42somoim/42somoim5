n = int(input())

for i in range(1, n*2):
    if i <= n:
        print(('*'*i).ljust(n, ' '), ('*'*i).rjust(n, ' '), sep='')
    else:
        print(('*'*(n*2-i)).ljust(n, ' '), ('*'*(n*2-i)).rjust(n, ' '), sep='')
