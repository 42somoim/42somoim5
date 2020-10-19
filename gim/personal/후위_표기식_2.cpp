#include <cstdio>
#include <string>
#include <stack>

using namespace std;

double operate(double a, double b, char c)
{
    switch(c)
    {
        case '*':
            return (a * b);
        case '/':
            return (a / b);
        case '+':
            return (a + b);
        case '-':
            return (a - b);
    }
    return (0);
}

int main(void)
{
    char str[101], c;
    int N;
    stack<double> s;
    double temp, arr[27];

    scanf("%d %s", &N, str);
    for (int i = 0; i < N; i++)
        scanf("%lf", &arr[i]);
    for (int i = 0; str[i]; i++)
    {
        c = str[i];
        switch(c)
        {
            case '*':
            case '/':
            case '+':
            case '-':
                temp = s.top();
                s.pop();
                temp = operate(s.top(), temp, c);
                s.pop();
                s.push(temp);
                break;
            default:
                s.push(arr[c - 'A']);
        }
    }
    printf("%.2lf\n", s.top());
    return (0);
}