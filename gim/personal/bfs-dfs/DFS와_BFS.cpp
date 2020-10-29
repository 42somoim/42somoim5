#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

bool visit[1001];
vector<int> v[1001];
int N, M, V;

void dfs(int n)
{
    printf("%d ", n);
    visit[n] = true;
    for (int i = 0; i < v[n].size(); i++)
        if (!visit[v[n][i]])
            dfs(v[n][i]);
    return ;
}

void bfs(int n)
{
    queue<int> q;

    q.push(n);
    visit[n] = true;
    while (!q.empty()){
        int new_n = q.front();
        printf("%d ", new_n);
        visit[new_n] = true;
        q.pop();
        for (int i = 0; i < v[new_n].size(); i++)
            if (!visit[v[new_n][i]])
            {
                visit[v[new_n][i]] = true;
                q.push(v[new_n][i]);
            }
    }
}

int main(void)
{
    int e1, e2;

    scanf("%d %d %d", &N, &M, &V);
    for(int i = 0; i < M; i++)
    {
        scanf("%d %d", &e1, &e2);
        v[e1].push_back(e2);
        v[e2].push_back(e1);
    }
    for (int i = 0; i < N; i++)
        sort(v[i].begin(), v[i].end());
    dfs(V);
    printf("\n");
    memset(visit, false, sizeof(visit));
    bfs(V);
    printf("\n");
    return (0);
}