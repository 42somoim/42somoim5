#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int dp[100001];
    int N, min_n;

    scanf("%d", &N);
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        min_n = dp[i - 1];
        for (int j = 2; j * j <= i; j++)
            min_n = min(min_n, dp[i - (j * j)]);
        dp[i] = min_n + 1;
    }
    printf("%d\n", dp[N]);
    return (0);
}