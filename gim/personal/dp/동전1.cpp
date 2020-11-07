#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int coins[100];
    int dp[10001] = {0};
    int N, K;

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
        scanf("%d", &coins[i]);
    dp[0] = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = coins[i]; j <= K; j++)
        {
            if (j >= coins[i])
                dp[j] += dp[j - coins[i]];
        }
    }
    printf("%d\n", dp[K]);
    return (0);
}