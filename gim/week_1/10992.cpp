#include <iostream>

using namespace std;

int main(void)
{
    int N, s, b, fin;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        fin = (2 * i) - 1;
        for (b = 0; b < N - i; b++)
            cout << ' ';
        if (i == N)
            for (s = 0; s < fin; s++)
                cout << '*';
        else
            for (s = 0; s < fin; s++)
                cout << ((s == 0 || s == (fin - 1)) ? '*' : ' ');
        cout << '\n';
    }
    return (0);
}