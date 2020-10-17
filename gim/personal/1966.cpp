#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

void solution(int N, int target)
{
    int cnt = 0, ipt, idx;
    queue<pair<int,int>> q;
    priority_queue<int> pq;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ipt);
        q.push({i, ipt});
        pq.push(ipt);
    }
    while (1)
    {
        idx = q.front().first;
        ipt = q.front().second;
        q.pop();
        if (ipt == pq.top())
        {
            pq.pop();
            cnt++;
            if (idx == target)
                break;
        }
        else
            q.push({idx, ipt});
    }
    printf("%d\n", cnt);
}

int main(void)
{
    int T, N, target;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &target);
        solution(N, target);
    }
    return (0);
}