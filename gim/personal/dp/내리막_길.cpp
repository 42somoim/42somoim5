#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define MAX 500 + 1
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int visit[MAX][MAX];
int board[MAX][MAX];
int row, col;

bool is_safe(int x, int y) {
    return (min(x, y) >= 0 && x < row && y < col);
}

int dfs(int x, int y) {
    if (x == row - 1 && y == col - 1)
        return (1);
    if (visit[x][y] == -1) {
        visit[x][y] = 0;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (is_safe(nx, ny) && board[nx][ny] < board[x][y]) {
                visit[x][y] += dfs(nx, ny);
            }
        }
    }
    return (visit[x][y]);
}

int main(void) {
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &board[i][j]);
            visit[i][j] = -1;
        }
    }
    printf("%d\n", dfs(0, 0));
    return (0);
}