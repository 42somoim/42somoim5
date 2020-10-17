#include <iostream>

using namespace std;

int main(void)
{
    int N, blank, star;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (blank = 0; blank < N - i; blank++)
            cout << " ";
        for (star = 0; star < (2 * i) - 1; star++)
            cout << "*";
        cout << '\n';
    }
    return (0);
}