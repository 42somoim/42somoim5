#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

int dx[] = {-2, -2, 2, 2, -1, 1, -1, 1};
int dy[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int N;

bool is_safe(int x, int y)
{
    return (min(x, y) >= 0 && max(x, y) < N);
}

int solution()
{
    int cur_x, cur_y, x, y;
    queue<pair<int,int>> q;
    bool visit[300][300] = {false};
    int route[300][300] = {0};
    scanf("%d", &N);
    scanf("%d %d %d %d", &cur_x, &cur_y, &x, &y);
    q.push({cur_x, cur_y});
    visit[cur_x][cur_y] = true;
    while (!q.empty()){
        pair<int,int> t;
        t = q.front();
        visit[t.first][t.second] = true;
        q.pop();
        for (int i = 0; i < 8; i++){
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if (!visit[nx][ny] && is_safe(nx, ny)){
                visit[nx][ny] = true;
                route[nx][ny] = route[t.first][t.second] + 1;
                if (nx == x && ny == y)
                    return (route[x][y]);
                q.push({nx, ny});
            }
        }
    }
    return (0);
}

int main(void)
{
    int T, ret;

    scanf("%d", &T);
    while (T--){
        ret = solution();
        printf("%d\n", ret);
    }
    return (0);
}