#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>

using namespace std;

int main(void)
{
    int arr[1001] = {0};
    stack<int> s;
    int min_l = 1001, max_l = 0, max_i = 0, N;
    int len, idx, ans = 0;

    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &idx, &len);
        arr[idx] = len;
        min_l = min(min_l, idx);
        max_l = max(max_l, idx);
        if (arr[idx] >= arr[max_i])
            max_i = idx;
    }
    for (int i = min_l; i <= max_i; i++)
    {
        if (s.empty())
            s.push(arr[i]);
        if (arr[i] > s.top())
            s.push(arr[i]);
        ans += s.top();
    }
    while (!s.empty())
        s.pop();
    for (int i = max_l; i > max_i; i--)
    {
        if (s.empty())
            s.push(arr[i]);
        if (arr[i] > s.top())
            s.push(arr[i]);
        ans += s.top();
    }
    printf("%d\n", ans);
    return (0);
}