#include <iostream>
#include <cstdio>

using namespace std;

long arr[1001];

long dq(long n)
{
    if (n == 1)
        return (1);
    if (n == 2)
        return (1);
    if (arr[n] != 0)
        return (arr[n]);
    return (arr[n] = dq(n - 1) + dq(n - 2));
}

int main(void)
{
    long N;

    scanf("%ld", &N);
    printf("%ld\n", dq(N));

    return (0);
}