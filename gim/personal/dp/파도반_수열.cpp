#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    long dp[101];
    int T, N;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for (int i = 3; i <= N; i++)
            dp[i] = dp[i - 3] + dp[i - 2];
        printf("%ld\n", dp[N]);
    }
    return (0);
}