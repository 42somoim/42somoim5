#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 8 + 1;
int N, M;
int dp[MAX];
int arr[MAX];

void recursive(int depth)
{
    if (depth == M)
    {
        for (int i = 0; i < M ; i++)
            printf("%d ", dp[i]);
        printf("\n");
        return ;
    }
    int before = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < dp[depth - 1])
            continue;
        if (before != arr[i])
        {
            before = arr[i];
            dp[depth] = arr[i];
            recursive(depth + 1);
        }
    }
}

int main(void)
{
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + N);
    recursive(0);
    return (0);
}