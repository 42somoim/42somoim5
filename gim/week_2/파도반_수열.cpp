#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int T;

    scanf("%d", &T);
    while (T--)
    {
        long dp[101] = {0};
        int N;

        dp[1] = 1;
        dp[2] = 1;
        scanf("%d", &N);
        for (int i = 3; i <= N; i++)
            dp[i] = dp[i - 2] + dp[i - 3];
        printf("%ld\n", dp[N]);
    }
    return (0);
}