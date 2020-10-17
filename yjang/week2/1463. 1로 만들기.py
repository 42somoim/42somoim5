n = int(input())

def makeOne(n):
    if n == 0:
        return 10**8
    if n == 1:
        return 0
    return min(makeOne(n//2) + n%2 + 1, makeOne(n//3) + n%3 + 1)

print(makeOne(n))