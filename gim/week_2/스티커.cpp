#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int T;

    scanf("%d", &T);
    while (T--)
    {
        int N, max_n;
        int arr[2][100001] = {};
        int dp[2][100001];

        scanf("%d", &N);
        for (int i = 0; i <= 1; i++){
            for (int j = 1; j <= N; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];
        for (int i = 2; i <= N; i++){
            for (int j = 0; j <= 1; j++){
                max_n = max(dp[j == 0 ? 1 : 0][i - 2], dp[j == 0 ? 1 : 0][i - 1]);
                dp[j][i] = max_n + arr[j][i];
            }
        }
        printf("%d\n", max(dp[0][N], dp[1][N]));
    }
    return (0);
}