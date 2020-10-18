#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    long arr[101][11] = {};
    long sum = 0;
    int N;

    scanf("%d", &N);
    for (int i = 1; i < 10; i++)
        arr[1][i] = 1;
    for (int i = 2; i <= N; i++)
    {
        arr[i][0] = arr[i - 1][1];
        for (int j = 1; j < 10; j++)
            arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
    }
    for (int i = 0; i < 10; i++)
        sum += arr[N][i];
    printf("%ld\n", sum % 1000000000);
}