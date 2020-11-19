#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX 10 + 1
int N, ret = 10000001;
int arr[MAX][MAX];
int dp[MAX];
bool visit[MAX];

void make_min_ret(int idx) {
    if (idx == N) {
        int sum = 0;
        for (int i = 0; i < N - 1; i++)
            sum += arr[dp[i]][dp[i + 1]];
        if (arr[dp[N - 1]][dp[0]]) {
            sum += arr[dp[N - 1]][dp[0]];
            ret = min(ret, sum);
        }
        return ;
    }
    for (int i = 1; i <= N; i++) {
        if (visit[i] || (idx > 0 && arr[dp[idx - 1]][i] == 0))
            continue;
        visit[i] = true;
        dp[idx] = i;
        make_min_ret(idx + 1);
        visit[i] = false;
    }
    return ;
}

int main(void) {
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    make_min_ret(0);
    printf("%d\n", ret);
    return (0);
}