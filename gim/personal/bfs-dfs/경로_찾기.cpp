#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

bool visit[101];
vector<int> v[101];

int bfs(int x, int y)
{
    queue<int> q;

    q.push(x);
    visit[x] = true;
    while (!q.empty()){
        int t = q.front();
        visit[t] = true;
        q.pop();
        for (int i = 0; i < v[t].size(); i++){
            int temp = v[t][i];
            if (temp == y)
                return (1);
            if (!visit[temp]){
                visit[temp] = true;
                q.push(temp);
            }
        }
    }
    return (0);
}

int main(void)
{
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int temp;
            scanf("%1d", &temp);
            if (temp == 1)
                v[i].push_back(j);
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            memset(visit, false, sizeof(visit));
            printf("%d ", bfs(i, j));
        }
        printf("\n");
    }
    return (0);
}