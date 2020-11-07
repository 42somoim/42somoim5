#include <iostream>
#include <cstdio>

using namespace std;

int cnt, N, S;
int arr[20];

void solution(int idx, int sum)
{
    if (idx == N)
        return ;
    if (arr[idx] + sum == S)
        cnt++;

    solution(idx + 1, sum);
    solution(idx + 1, sum + arr[idx]);
}

int main(void)
{
    scanf("%d %d", &N, &S);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    solution(0, 0);
    printf("%d\n", cnt);
    return (0);
}

/* 재귀를 구현할 때는 레벨에 따른 값과 경우의 수를 구해보자. */