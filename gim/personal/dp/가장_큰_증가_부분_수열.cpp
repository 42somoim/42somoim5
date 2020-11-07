#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int N, max_n = 0;
    int arr[1001];
    int dp[1001] = {0};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j]);
        }
        dp[i] += arr[i];
        max_n = max(max_n, dp[i]);
    }
    printf("%d\n", max_n);
    return (0);
}