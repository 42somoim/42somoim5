#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int board[25][25];
bool visit[25][25];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

bool is_safe(int x, int y)
{
    return (min(x, y) >= 0 && max(x, y) < N);
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

int main(void)
{
    vector<int> v;
    int ret;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%1d", &board[i][j]);
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (!visit[i][j] && board[i][j])
                v.push_back(dfs(i, j));
        }
    }
    ret = v.size();
    printf("%d\n", ret);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        printf("%d\n", v[i]);
    return (0);
}