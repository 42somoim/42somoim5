#include <iostream>
#include <cstdio>

using namespace std;

int get_sum(int n)
{
    int sum = n;

    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return (sum);
}

int main(void)
{
    int N, sum;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        sum = get_sum(i);
        if (sum == N)
        {
            printf("%d\n", i);
            return (0);
        }
    }
    printf("0\n");
    return (0);
}