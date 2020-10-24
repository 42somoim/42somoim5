#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>

using namespace std;

int main(void)
{
    char str[100001];
    char c;
    int T, i = 0;
    deque<char> dq;
    stack<char> s;

    cin >> str >> T;
    while (str[i])
        dq.push_back(str[i++]);
    while (T--)
    {
        cin >> c;
        if (c == 'P')
        {
            cin >> c;
            dq.push_back(c);
        }
        if (c == 'B' && dq.size())
            dq.pop_back();
        if (c == 'L' && dq.size())
        {
            s.push(dq.back());
            dq.pop_back();
        }
        if (c == 'D' && s.size())
        {    
            dq.push_back(s.top());
            s.pop();
        }
    }
    while (!dq.empty())
    {
        cout << dq.front();
        dq.pop_front();
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout << '\n';
    return (0);
}