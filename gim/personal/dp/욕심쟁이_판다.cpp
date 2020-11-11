#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define MAX 500

int N;
int board[MAX][MAX];
int dp[MAX][MAX];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool is_safe(int x, int y) {
    return (min(x, y) >= 0 && max(x, y) < N);
}

int dfs(int x, int y) {
    if (dp[x][y])
        return (dp[x][y]);
    dp[x][y] = 1;
    for (int i = 0 ; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_safe(nx, ny) && board[x][y] < board[nx][ny]) {
            dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
        }
    }
    return (dp[x][y]);
}

int main(void) {
    int ret = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &board[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ret = max(ret, dfs(i, j));
        }
    }
    printf("%d\n", ret);
    return (0);
}