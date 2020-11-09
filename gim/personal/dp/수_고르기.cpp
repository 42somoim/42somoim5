#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(void)
{
    int arr[100001];
    int N, low, high;
    long M, diff, ans = 2000000001;

    scanf("%d %ld", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr + N);
    low = 0;
    high = 0;
    while (low < N && high < N) {
        diff = abs(arr[high] - arr[low]);
        if (diff >= M) {
            ans = min(ans, diff);
            low++;
        }
        else
            high++;
    }
    printf("%ld\n", ans);
    return (0);
}