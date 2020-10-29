#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool visit[50][50];
int board[50][50];
int T, row, col, n;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int is_safe(int x, int y)
{
    return (min(x, y) >= 0 && x < row && y < col);
}

void init(int x, int y)
{
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            visit[i][j] = false;
}

void dfs(int x, int y)
{
    visit[x][y] = true;
    board[x][y] = 0;
    for (int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (is_safe(nx, ny) && !visit[nx][ny] && board[nx][ny]){
                dfs(nx, ny);
            }
    }
    return ;
}

void solution()
{
    int x, y, ret = 0;

    scanf("%d %d %d", &row, &col, &n);
    init(row, col);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        board[x][y] = 1;
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (!visit[i][j] && board[i][j]){
                dfs(i, j);
                ret++;
            }
        }
    }
    printf("%d\n", ret);
}

int main(void)
{
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        solution();
    }
    return (0);
}