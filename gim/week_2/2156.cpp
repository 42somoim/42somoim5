#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(void)
{
    int N, ans;
    int arr[10003];
    int dp[10003];

    scanf("%d", &N);
    for (int i = 3; i < N + 3; i++)
        scanf("%d", &arr[i]);
    for (int i = 3; i < N + 3; i++)
    {
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
        dp[i] = max(dp[i], dp[i - 1]);
    }
    printf("%d\n", dp[N + 2]);
    return (0);
}