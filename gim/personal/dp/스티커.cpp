#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

void solution()
{
    int N;
    int arr[2][100001];
    int dp[2][100001];

    scanf("%d", &N);
    for (int i = 0; i < 2; i++)
        for (int j = 1; j <= N; j++)
            scanf("%d", &arr[i][j]);
    dp[0][1] = arr[0][1];
    dp[1][1] = arr[1][1];
    for (int i = 2; i <= N; i++)
    {
        dp[0][i] = max(dp[1][i - 2] + arr[0][i], dp[1][i - 1] + arr[0][i]);
        dp[1][i] = max(dp[0][i - 2] + arr[1][i], dp[0][i - 1] + arr[1][i]);
    }
    printf("%d\n", max(dp[0][N], dp[1][N]));
}

int main(void)
{
    int T;

    scanf("%d", &T);
    while (T--)
        solution();
    return (0);
}