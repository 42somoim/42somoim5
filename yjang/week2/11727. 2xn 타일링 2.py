n = int(input())

a, b = 1, 3
for _ in range(n-1):
    a, b = b, a*2 + b
    
print(a % 10_007)