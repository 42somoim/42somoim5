#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || \
            (c >= 'A' && c <= 'Z') || \
            (c >= '0' && c <= '9'));
}

int main(void)
{
    stack<char> s;
    deque<char> dq;
    string str;
    int N;

    cin >> N;
    while (N--)
    {
        cin >> str;
        for (int i = 0; str[i]; i++)
        {
            char c = str[i];
            if (is_alpha(c))
                dq.push_back(c);
            if (c == '-' && dq.size())
                dq.pop_back();
            if (c == '<' && dq.size())
            {
                s.push(dq.back());
                dq.pop_back();
            }
            if (c == '>' && s.size())
            {
                dq.push_back(s.top());
                s.pop();
            }
        }
        while (dq.size())
        {
            cout << dq.front();
            dq.pop_front();
        }
        while (s.size())
        {
            cout << s.top();
            s.pop();
        }
        cout << '\n';
    }
    return (0);
}