#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

#define MAX 20 + 1
string map[MAX];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int row, col, ans = 0;
bool visit[27];

bool is_safe(int x, int y) {
    return (min(x, y) >= 0 && x < row && y < col);
}

void dfs(int x, int y, int route) {
    int idx = map[x][y] - 'A';
    visit[idx] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_safe(nx, ny) && !visit[map[nx][ny] - 'A'])
            dfs(nx, ny, route + 1);
    }
    ans = max(ans, route);
    visit[idx] = false;
    return ;
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> row >> col;
    for (int i = 0; i < row; i++)
        cin >> map[i];
    dfs(0, 0, 1);
    cout << ans << '\n';
    return (0);
}