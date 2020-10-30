#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

bool visit[101];
int route[101] = {0};
vector<int> v[101];
queue<int> q;

typedef struct target
{
    int x;
    int y;
} target;

void bfs(int cur, int search)
{
    q.push(cur);
    visit[cur] = true;
    while (!q.empty()){
        int temp = q.front();
        visit[cur] = true;
        q.pop();
        for (int i = 0; i < v[temp].size(); i++){
            if (!visit[v[temp][i]]){
                visit[v[temp][i]] = true;
                route[v[temp][i]] = route[temp] + 1;
                q.push(v[temp][i]);
            }
        }
    }
}

int main(void)
{
    int N, case_n, a, b, find = -1;
    target t;

    scanf("%d %d %d %d", &N, &t.x, &t.y, &case_n);
    for (int i = 0; i < case_n; i++){
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(t.x, t.y);
    printf("%d\n", route[t.y] ? route[t.y] : -1);
    return (0);
}