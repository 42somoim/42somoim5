#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int N, A, B, C;
    int arr[1000001];
    long long ret;

    scanf("%d", &N);
    ret = N;
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    scanf("%d %d", &B, &C);
    for (int i = 0; i < N; i++)
    {
        arr[i] -= B;
        if (arr[i] <= 0)
            continue;
        if (arr[i] % C != 0)
            ret++;
        ret += (arr[i] / C);
    }
    printf("%lld\n", ret);
    return (0);
}