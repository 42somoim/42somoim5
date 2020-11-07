#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 10000

void solution(int N, int M)
{
    int idx, jdx, sum, cnt;
    int arr[MAX];

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sum = 0;
    cnt = 0;
    idx = 0;
    jdx = 0;
    while (1)
    {
        if (sum >= M)
            sum -= arr[jdx++];
        else if (idx == N)
            break;
        else
            sum += arr[idx++];
        if (sum == M)
            cnt++;
    }
    printf("%d\n", cnt);
}

int main(void)
{
    int N, M;

    scanf("%d %d", &N, &M);
    solution(N, M);

    return (0);
}