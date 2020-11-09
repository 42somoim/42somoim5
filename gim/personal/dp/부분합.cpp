#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int arr[100001];
    int N, S, low, high, sum, ans;

    scanf("%d %d", &N, &S);
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    low = 0;
    high = 0;
    sum = arr[high];
    ans = N + 1;
    while (low < N && high < N) {
        if (sum < S) {
            sum += arr[++high];
        } else {
            ans = min(ans, (high - low) + 1);
            sum -= arr[low++];
        }
    }
    printf("%d\n", ans == N + 1 ? 0 : ans);
    return (0);
}