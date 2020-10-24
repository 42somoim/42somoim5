#include <iostream>
#include <cstdio>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    queue<int> q[21];
    int N, K, len;
    long long cnt = 0;
    string name;

    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> name;
        len = name.length();
        while (q[len].size() && i - q[len].front() > K)
            q[len].pop();
        cnt += q[len].size();
        q[len].push(i);
    }
    cout << cnt << '\n';
    return (0);
}