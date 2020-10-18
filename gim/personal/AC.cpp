#include <iostream>
#include <cstdio>
#include <queue>
#include <string>

using namespace std;

void solution()
{
    int N, num = 0, rev = 1;
    string str, arr;
    deque<int> dq;
    char c;
    
    cin >> str >> N >> arr;
    for (int i = 0; arr[i]; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            num = num * 10 + (arr[i] - '0');
        else
        {
            if (num != 0)
                dq.push_back(num);
            num = 0;
        }
    }
    for (int i = 0; str[i]; i++)
    {
        c = str[i];
        if (c == 'R')
            rev *= -1;
        if (c == 'D')
        {
            if (dq.empty())
            {
                cout << "error\n";
                return ;
            }
            if (rev > 0)
                dq.pop_front();
            else
                dq.pop_back();
        }
    }
    cout << '[';
    if (rev > 0)
    {
        while (dq.size())
        {
            cout << dq.front();
            dq.pop_front();
            if (dq.size())
                cout << ',';
        }
    }
    else
    {
        while (dq.size())
        {
            cout << dq.back();
            dq.pop_back();
            if (dq.size())
                cout << ',';
        }
    }
    cout << "]\n";
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;

    cin >> T;
    while (T--)
        solution();
    return (0);
}