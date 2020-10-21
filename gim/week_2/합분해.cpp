#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int N, K;
    long dp[201][201] = {};

    scanf("%d %d", &N, &K);
    for (int i = 0; i <= N; i++)
        dp[1][i] = 1;
    for (int i = 2; i <= K; i++){
        for (int j = 0; j <= N; j++){
            for (int k = 0; k <= j; k++){
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % 1000000000;
            }
        }
    }
    printf("%ld\n", dp[K][N] % 1000000000);
    return (0);
}