#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    queue<char> ans;
    stack<char> op;
    string str;
    char c;

    cin >> str;
    for (int i = 0; str[i]; i++)
    {
        c = str[i];
        if (c >= 'A' && c <= 'Z')
            ans.push(c);
        if (c == '(')
            op.push(c);
        if (c == ')')
        {
            while (op.top() != '(')
            {
                ans.push(op.top());
                op.pop();
            }
            op.pop();
        }
        if (c == '*' || c == '/')
        {
            while (op.top() != '(' && op.top() != '+' && op.top() != '-' && op.size())
            {
                ans.push(op.top());
                op.pop();
            }
            op.push(c);
        }
        if (c == '+' || c == '-')
        {
            while (op.top() != '(' && op.size())
            {
                ans.push(op.top());
                op.pop();
            }
            op.push(c);
        }
    }
    while (op.size())
    {
        ans.push(op.top());
        op.pop();
    }
    while (ans.size())
    {
        cout << ans.front();
        ans.pop();
    }
    cout << '\n';
    return (0);
}