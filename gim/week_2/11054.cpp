#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    int inc[1001] = {0};
    int dec[1001] = {0};
    int arr[1001];
    int N, result = 0, flag;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                inc[i] = max(inc[i], inc[j]);
        inc[i]++;
    }
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - 1; j > i; j--)
            if (arr[i] > arr[j])
                dec[i] = max(dec[i], dec[j]);
        dec[i]++;
    }
    for (int i = 0; i < N; i++)
        result = max(result, inc[i] + dec[i]);
    printf("%d\n", result - 1);
    return (0);
}