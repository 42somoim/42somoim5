N = int(input())

dp = [[0] * 10 for i in range(N)]
dp[0] = [1] * 10

for i in range(N-1):
    for j in range(10):
        if j >= 1:
            dp[i + 1][j - 1] += dp[i][j]
        if j <= 8:
            dp[i + 1][j + 1] += dp[i][j]

print((sum(dp[-1]) - dp[-1][0]) % 1_000_000_000)