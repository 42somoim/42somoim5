#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main(void)
{
    stack<int> s[7];
    int N, P, line, num, cnt = 0;

    scanf("%d %d", &N, &P);
    while (N--)
    {
        scanf("%d %d", &line, &num);
        while (s[line].size() && s[line].top() > num)
        {
            cnt++;
            s[line].pop();
        }
        if (s[line].size() && num > s[line].top())
        {
            cnt++;
            s[line].push(num);
        }
        if (s[line].empty())
        {
            cnt++;
            s[line].push(num);
        }
    }
    printf("%d\n", cnt);
    return (0);
}