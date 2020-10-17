#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int N, max_sum;
    int arr[1001];
    int sum[1001];

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    max_sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
                sum[i] = max(sum[i], sum[j]);
        }
        sum[i] += arr[i];
        max_sum = sum[i] > max_sum ? sum[i] : max_sum;
    }
    cout << max_sum << '\n';
    return (0);
}