#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
    int N, result;
    int arr[100001];
    int dp[100001];

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    result = arr[0];
    dp[0] = arr[0];
    for (int i = 1; i < N; i++)
    {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        result = max(result, dp[i]);
    }
    cout << result << '\n';
    return (0);
}