#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    int dp[1001] = {0};
    int deck[1001];

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", &deck[i]);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + deck[j]);
        }
    }
    printf("%d\n", dp[N]);
    return (0);
}