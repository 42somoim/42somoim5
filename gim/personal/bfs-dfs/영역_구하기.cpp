#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 100 + 1
int R, C, N;
int arr[MAX][MAX];
bool visit[MAX][MAX];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

struct edge {
    int x, y;
};

edge e1[100], e2[100];

bool is_safe(int cx, int cy) {
    if (min(cx, cy) < 0 || cx == R || cy == C)
        return (false);
    for (int i = 0; i < N; i++) {
        if (e1[i].x <= cx && e2[i].x > cx && e1[i].y <= cy && e2[i].y > cy)
            return (false);
    }
    return (true);
}

int dfs(int x, int y) {
    int ret = 1;

    visit[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_safe(nx, ny) && !visit[nx][ny]) {
            ret += dfs(nx, ny);
        }
    }
    return (ret);
}

int main(void) {
    vector<int> v;

    scanf("%d %d %d", &R, &C, &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d %d %d", &e1[i].y, &e1[i].x, &e2[i].y, &e2[i].x);
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (is_safe(i, j) && !visit[i][j]) {
                v.push_back(dfs(i, j));
            }
        }
    }
    sort(v.begin(), v.end());
    printf("%lu\n", v.size());
    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return (0);
}