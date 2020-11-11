#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    int max_dp[3] = {0};
    int min_dp[3] = {0};
    int buffer[3];
    int N, temp_0, temp_2, max_ret = 0, min_ret = 1000000;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &buffer[j]);
        }
        temp_0 = max_dp[0];
        temp_2 = max_dp[2];
        max_dp[0] = max(max_dp[0], max_dp[1]) + buffer[0];
        max_dp[2] = max(max_dp[1], max_dp[2]) + buffer[2];
        max_dp[1] = max(max(temp_0, temp_2), max_dp[1]) + buffer[1];
        temp_0 = min_dp[0];
        temp_2 = min_dp[2];
        min_dp[0] = min(min_dp[0], min_dp[1]) + buffer[0];
        min_dp[2] = min(min_dp[1], min_dp[2]) + buffer[2];
        min_dp[1] = min(min(temp_0, temp_2), min_dp[1]) + buffer[1];
    }
    for (int i = 0; i < 3; i++) {
        max_ret = max(max_ret, max_dp[i]);
        min_ret = min(min_ret, min_dp[i]);
    }
    printf("%d %d\n", max_ret, min_ret);
    return (0);
}