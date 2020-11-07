#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int r, c, n;
int board[101][101];
bool visit[101][101];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool is_safe(int x, int y)
{
    return (min(x, y) > 0 && x <= r && y <= c);
}

int dfs(int x, int y)
{
    int ret = 1;

    visit[x][y] = true;
    board[x][y] = 0;

    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_safe(nx, ny) && !visit[nx][ny] && board[nx][ny])
            ret += dfs(nx, ny);
    }
    return (ret);
}

int main (void)
{
    vector<int> v;
    int x, y, ret;

    scanf("%d %d %d", &r, &c, &n);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        board[x][y] = 1;
    }
    for (int i = 1; i <= r; i++){
        for (int j = 1; j <= c; j++){
            if (!visit[i][j] && board[i][j])
                v.push_back(dfs(i, j));
        }
    }
    ret = *max_element(v.begin(), v.end());
    printf("%d\n", ret);
    return (0);
}