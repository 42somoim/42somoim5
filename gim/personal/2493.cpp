#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main(void)
{
    int N;
    int *arr;
    stack<int> s;

    scanf("%d", &N);
    arr = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (int i = N - 1; i >= 0 ; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                s.push(j + 1);
                break;
            }
            if (j == 0)
                s.push(0);
        }
    }
    while (s.size() > 1)
    {
        printf("%d ", s.top());
        s.pop();
    }
    printf("%d\n", s.top());
    return (0);
}