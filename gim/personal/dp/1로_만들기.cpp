#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    int dp[1000001];

    scanf("%d", &N);
    dp[1] = 0;
    for (int i = 2; i <= N; i++)
    {
        int min_n = dp[i - 1];
        if (i % 2 == 0)
            min_n = min(min_n, dp[i / 2]);
        if (i % 3 == 0)
            min_n = min(min_n, dp[i / 3]);
        dp[i] = min_n + 1;
    }
    printf("%d\n", dp[N]);
    return (0);
}