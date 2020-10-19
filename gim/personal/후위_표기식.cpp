#include <iostream>
#include <stack>
#include <string>

using namespace std;

int check_priority(char c)
{
    switch(c)
    {
        case '*':
        case '/':
            return (2);
        case '+':
        case '-':
            return (1);
        case '(':
        case ')':
            return (0);
    }
    return (-1);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str, result;
    stack<char> s;
    int p;
    char c;

    cin >> str;
    for (int i = 0; str[i]; i++)
    {
        c = str[i];
        p = check_priority(str[i]);
        switch(c)
        {
            case '*':
            case '/':
            case '+':
            case '-':
                while (s.size() && check_priority(s.top()) >= p)
                {
                    result.push_back(s.top());
                    s.pop();
                }
                s.push(c);
                break;
            case '(':
                s.push(c);
                break;
            case ')':
                while (s.size() && s.top() != '(')
                {
                    result.push_back(s.top());
                    s.pop();
                }
                s.pop();
                break;
            default:
                result.push_back(c);
        }
    }
    while (s.size())
    {
        result.push_back(s.top());
        s.pop();
    }
    cout << result << '\n';
    return (0);
}