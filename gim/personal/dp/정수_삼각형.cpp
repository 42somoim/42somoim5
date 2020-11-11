#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX 500

int main(void)
{
    int N, temp, max_n = 0;
    vector<int> v[MAX];
    int dp[MAX][MAX];

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &temp);
            v[i].push_back(temp);
        }
    }
    dp[0][0] = v[0][0];
    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + v[i][j];
            else if (j == i)
                dp[i][j] = dp[i - 1][j - 1] + v[i][j];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + v[i][j];
            max_n = max(max_n, dp[i][j]);
        }
    }
    printf("%d\n", max_n);
    return (0);
}