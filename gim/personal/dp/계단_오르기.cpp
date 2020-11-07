#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int arr[301];
    int dp[301];
    int N;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", &arr[i]);
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
    for (int i = 4; i <= N; i++)
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
    printf("%d\n", dp[N]);
    return (0);
}