#include <iostream>
#include <cstdio>

using namespace std;

#define MAX 90 + 1
long arr[MAX] = {0, 1};

void solution(int N)
{
    for (int i = 2; i <= N; i++)
        arr[i] = arr[i - 2] + arr[i - 1];
    printf("%ld\n", arr[N]);
}

int main(void)
{
    int N;

    scanf("%d", &N);
    solution(N);

    return (0);
}