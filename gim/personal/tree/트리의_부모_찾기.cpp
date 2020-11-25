#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX 100001

vector<int> v[MAX];
int arr[MAX];
int n, a, b;
bool visit[MAX];

void dfs(int parent) {
    visit[parent] = true;
    for (int i = 0; i < v[parent].size(); i++) {
        int child = v[parent][i];
        if (!visit[child]) {
            arr[child] = parent;
            dfs(child);
        }
    }
}

int main(void) {
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for (int i = 2; i <= n; i++)
        printf("%d\n", arr[i]);
    return (0);
}