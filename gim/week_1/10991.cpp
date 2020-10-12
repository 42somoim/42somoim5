#include <iostream>

using namespace std;

int main(void)
{
    int N;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int b = 0; b < N - i; b++)
            cout << ' ';
        for (int s = 0; s < i; s++)
            cout << "* ";
        cout << '\n';
    }
    return (0);
}