n = int(input())

a, b = 1, 1
for _ in range(n):
    a, b = b, a+b
    
print(a % 10_007)
