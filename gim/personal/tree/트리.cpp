#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define MAX 50 + 1
vector<int> v[MAX];
int N, parent, root, target, leaf = 0;

void dfs(int node) {
    int cnt = 0;

    for (int i = 0; i < v[node].size(); i++) {
        if (v[node][i] == target) continue;
        cnt++;
        dfs(v[node][i]);
    }
    if (cnt == 0)
        leaf++;
}

int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &parent);
        if (parent != -1)
            v[parent].push_back(i);
        else
            root = i;
    }
    scanf("%d", &target);
    if (root != target)
        dfs(root);
    printf("%d\n", leaf);
    return (0);
}