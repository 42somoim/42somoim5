#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

#define MAX 5
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int row, col, n, ans = 0;
bool visit[MAX][MAX];
string str[MAX];

bool is_safe(int x, int y) {
    return (min(x, y) >= 0 && x < row && y < col);
}

void dfs(int x, int y, int route) {
    if (x == row - 1 && y == col - 1 && route == n) {
        ans++;
        return ;
    }
    visit[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_safe(nx, ny) && !visit[nx][ny] && str[nx][ny] != 'T') {
            dfs(nx, ny, route + 1);
        }
    }
    visit[x][y] = false;
    return ;
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> row >> col >> n;
    for (int i = row - 1; i >= 0; i--)
        cin >> str[i];
    dfs(0, 0, 1);
    printf("%d\n", ans);
    return (0);
}