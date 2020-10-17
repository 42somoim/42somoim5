#include <cstdio>
#include <queue>

using namespace std;

void execute(char str[], int N, deque<int> dq)
{
    int rev = 1, i = 0;

    while (str[i])
    {
        if (str[i] == 'R')
            rev *= -1;
        if (str[i] == 'D')
        {
            if (dq.size() == 0)
            {
                printf("error\n");
                return ;
            }
            rev > 0 ? dq.pop_front() : dq.pop_back();
        }
        i++;
    }
    printf("[");
    if (rev > 0)
    {
        while (dq.size() > 1)
        {
            printf("%d,", dq.front());
            dq.pop_front();
        }
    }
    else
    {
        while (dq.size() > 1)
        {
            printf("%d,", dq.back());
            dq.pop_back();
        }
    }
    printf("%d]\n", dq.front());
}

void solution()
{
    char str[1000001], c = 0;
    int N, num = 0;
    deque<int> dq;

    scanf("%s", str);
    scanf("%d", &N);
    while (c != ']')
    {
        scanf("%c", &c);
        if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        if ((c == ',' || c == ']') && num != 0)
        {
            dq.push_back(num);
            num = 0;
        }
    }
    execute(str, N, dq);
}

int main(void)
{
    int T;

    scanf("%d", &T);
    while (T--)
        solution();
    return (0);
}