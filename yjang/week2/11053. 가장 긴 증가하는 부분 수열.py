N = int(input())
ary = list(map(int, input().split()))

dp = [1 for i in range(N)]

for i in range(N):
    for j in range(i):
        if ary[i] > ary[j]:
            dp[i] = max(dp[i], dp[j] + 1)
print(max(dp))