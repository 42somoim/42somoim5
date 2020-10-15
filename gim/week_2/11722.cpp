#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int N, max_l, result;
    int arr[1001];
    int len[1001];

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    result = 0;
    for (int i = 0; i < N; i++)
    {
        max_l = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
                max_l = max(max_l, len[j]);
        }
        len[i] = max_l + 1;
        result = len[i] > result ? len[i] : result;
    }
    cout << result << '\n';
    return (0);
}