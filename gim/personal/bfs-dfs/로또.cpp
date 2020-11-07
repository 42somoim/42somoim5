#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

bool visit[50];
int dp[12];
int nums[12];
int N;

void dfs(int depth)
{
    if (depth == 6){
        for (int i = 0; i < 6; i++)
            printf("%d ", dp[i]);
        printf("\n");
    }
    for (int i = 0; i < N; i++){
        int temp = nums[i];
        if (depth > 0 && temp < dp[depth - 1])
            continue;
        if (!visit[temp]){
            dp[depth] = temp;
            visit[temp] = true;
            dfs(depth + 1);
            visit[temp] = false;
        }
    }
}

int solution()
{
    scanf("%d", &N);
    if (N == 0)
        return (0);
    memset(visit, false, sizeof(visit));
    for (int i = 0; i < N; i++)
        scanf("%d", &nums[i]);
    sort(nums, nums + N);
    dfs(0);
    printf("\n");
    return (1);
}

int main(void)
{
    while (1){
        if (!solution())
            break;
    }
    return (0);
}