#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int N;
    int deck[10001];
    int result[1001];

    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> deck[i];
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= i; j++)
            result[i] = max(result[i], result[i - j] + deck[j]);
    cout << result[N] << '\n';
    return (0);
}