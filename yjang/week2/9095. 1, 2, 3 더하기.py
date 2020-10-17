n = int(input())
ans = [0] * n

for i in range(n):
    ans[i] = int(input())

dp = [1, 2, 4]

for i in range(3, max(ans)):
    dp.append(dp[i - 3] + dp[i - 2] + dp[i - 1])

for i in range(n):
    print(dp[ans[i] - 1])
