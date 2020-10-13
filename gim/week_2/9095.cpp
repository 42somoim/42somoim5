#include <iostream>

using namespace std;

int main(void)
{
    int T, N;
    int arr[11];

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 4; i <= N; i++)
            arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
        cout << arr[N] << '\n';
    }
    return (0);
}