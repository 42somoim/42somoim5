#include <iostream>
#include <cstdio>
#include <stack>
#include <utility>

using namespace std;

int main(void)
{
    stack<pair<int,int>> s;
    int N, h;

    scanf("%d", &N);
    int arr[N + 1];
    for (int i = 1; i <= N; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i <= N; i++)
    {
        while (s.size() && arr[i] > s.top().second)
            s.pop();
        if (s.size() && s.top().second >= arr[i])
        {
            printf("%d", s.top().first);
            i != N ? printf(" ") : printf("\n");
            s.push({i, arr[i]});
        }
        if (s.empty())
        {
            printf("0");
            i != N ? printf(" ") : printf("\n");
            s.push({i, arr[i]});
        }
    }
    return (0);
}