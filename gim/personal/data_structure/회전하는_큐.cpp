#include <iostream>
#include <cstdio>
#include <deque>

using namespace std;

int main(void)
{
    int N, T, find, idx, cnt = 0;
    deque<int> dq;

    scanf("%d %d", &N, &T);
    for (int i = 1; i <= N; i++)
        dq.push_back(i);
    while (T--)
    {
        scanf("%d", &find);
        for (int i = 0; i < dq.size(); i++)
        {
            if (dq[i] == find)
            {
                idx = i;
                break;
            }
        }
        if (idx < dq.size() - idx)
        {
            while (dq.front() != find)
            {
                cnt++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            dq.pop_front();
        }
        else
        {
            while (dq.front() != find)
            {
                cnt++;
                dq.push_front(dq.back());
                dq.pop_back();
            }
            dq.pop_front();
        }
    }
    printf("%d\n", cnt);
    return (0);
}