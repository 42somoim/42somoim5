#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int N;
    int dp[101];

    scanf("%d", &N);
    dp[1] = 9;
    for (int i = 2; i <= N; i++)
        dp[i] = dp[i - 1] * 2 - 1;
    printf("%d\n", dp[N]);
    return (0);
}