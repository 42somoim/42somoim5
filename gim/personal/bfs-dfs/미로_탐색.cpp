#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

bool visit[100][100];
int board[100][100];
int route[100][100];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int row, col;

bool is_safe(int x, int y)
{
    return (min(x, y) >= 0 && x < row && y < col);
}

int main(void)
{
    queue<pair<int,int>> q;

    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%1d", &board[i][j]);
        }
    }
    q.push({0, 0});
    visit[0][0] = true;
    route[0][0] = 1;
    while (!q.empty()){
        pair<int,int> t = q.front();
        visit[t.first][t.second] = true;
        q.pop();
        for (int i = 0; i < 4; i++){
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if (is_safe(nx, ny) && !visit[nx][ny] && board[nx][ny]){
                route[nx][ny] = route[t.first][t.second] + 1;
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    printf("%d\n", route[row - 1][col - 1]);
    return (0);
}