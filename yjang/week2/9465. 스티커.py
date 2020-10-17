for _ in range(int(input())):
    input()
    top = list(map(int, input().split()))
    bottom = list(map(int, input().split()))

    prevT, prevB = 0, 0
    for a, b in zip(top, bottom):
        prevT, prevB = max(prevT, prevB + a), max(prevB, prevT + b)
    print(max(prevT, prevB))