#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

#define MAX 100001
bool visit[MAX];
int route[MAX] = {0};
int dx[] = {-1, 1};

bool is_safe(int x)
{
    return (x >= 0 && x <= MAX);
}

int bfs(int x, int y)
{
    queue<int> q;
    int nx;

    q.push(x);
    visit[x] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for (int i = 0; i < 3; i++){
            if (i == 2)
                nx = cur * i;
            else
                nx = cur + dx[i];
            if (is_safe(nx) && !visit[nx]){
                visit[nx] = true;
                route[nx] = route[cur] + 1;
                if (nx == y)
                    return (route[nx]);
                q.push(nx);
            }
        }
    }
    return (0);
}

int main(void)
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", bfs(x, y));
    return (0);
}