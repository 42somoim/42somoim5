#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

int main(void)
{
    deque<pair<int,int>> dq;
    int N, move;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &move);
        dq.push_back({i, move});
    }
    move = dq.front().second;
    printf ("%d ", dq.front().first + 1);
    dq.pop_front();
    while (dq.size() > 1)
    {
        if (move > 0)
        {
            for (int i = 1; i < move; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            move = dq.front().second;
            printf("%d ", dq.front().first + 1);
            dq.pop_front();
        }
        else
        {
            for (int i = 1; i < move * -1; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            move = dq.back().second;
            printf("%d ", dq.back().first + 1);
            dq.pop_back();
        }
    }
    printf("%d\n", dq.front().first + 1);
    return (0);
}