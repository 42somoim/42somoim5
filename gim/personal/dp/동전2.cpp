#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 10001

int main(void) {
    int N, K, temp;
    int coins[100];
    int dp[MAX];

    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++)
        scanf("%d", &coins[i]);
    for (int i = 1; i <= K; i++)
        dp[i] = MAX;
    sort(coins, coins + N);
    for (int i = 0; i < N; i++) {
        if (coins[i] > K)
            break;
        for (int j = 1; j <= K; j++) {
            if (j >= coins[i]) {
                temp = dp[j - coins[i]];
                if (j == coins[i] || dp[j - coins[i]] != 0)
                    temp++;
                dp[j] = min(dp[j], temp);
            }
        }
    }
    printf("%d\n", dp[K] == MAX ? -1 : dp[K]);
    return (0);
}