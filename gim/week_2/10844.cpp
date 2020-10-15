// 보류.
#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int arr[101];

    arr[1] = 9;
    cin >> N;
    for (int i = 2; i <= N; i++)
        arr[i] = (2 * arr[i - 1] - (i - 1)) % 1000000000;
    cout << arr[N] << '\n';
    return (0);
}