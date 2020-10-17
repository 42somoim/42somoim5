#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int arr[1001];

    arr[1] = 1;
    arr[2] = 2;
    cin >> N;
    for (int i = 3; i <= N; i++)
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10007;
    cout << arr[N] << '\n';
    return (0);
}