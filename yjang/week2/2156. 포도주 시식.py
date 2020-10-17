N = int(input())
ary = [0] * N

for i in range(N):
    ary[i] = int(input())

dp = [ary[0]] + [0] * (N-1)
if N > 1: 
    dp[1] = ary[0] + ary[1]
for i in range(2, N):
    dp[i] = max(dp[i-1], dp[i-3] + ary[i-1] + ary[i], dp[i-2] + ary[i])

print(dp[N-1])