#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define MAX 100001

int arr[MAX][MAX];
int dp[MAX][MAX];
int dy[] = {-1, 0, 1};
int N;

bool is_safe(int x, int y) {
    return (min(x, y) >= 0 && max(x, y) < N);
}

void fill_in(int x, int y) {
    int nx = x + 1;

    for (int i = 0; i < 3; i++) {
        int ny = y + dy[i];
        if (is_safe(nx, ny)) {
            dp[nx][ny] = max(dp[nx][ny], dp[x][y] + arr[nx][ny]);
            fill_in(nx, ny);
        }
        return ;
    }
}

int main(void)
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        dp[0][i] = arr[0][i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N; j++) {
            fill_in(i, j);
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", dp[N - i][i]);
    }
    return (0);
}