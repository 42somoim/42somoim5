#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int dp[1001][10] = {};
    int N, ans;

    scanf("%d", &N);
    for (int i = 0; i < 10; i++)
        dp[1][i] = 1;
    for (int i = 2; i <= N; i++)
        for (int j = 0; j < 10; j++)
            for (int k = j; k < 10; k++)
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 10007;
    ans = 0;
    for (int i = 0; i < 10; i++)
        ans = (ans + dp[N][i]) % 10007;
    printf("%d\n", ans);
    return (0);
}