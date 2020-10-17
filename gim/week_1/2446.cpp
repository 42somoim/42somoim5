#include <iostream>

using namespace std;

void draw(int N, int i)
{
    int star, blank;

    for (blank = 0; blank < N - i; blank++)
        cout << ' ';
    for (star = 0; star < (2 * i) - 1; star++)
        cout << '*';
    cout << '\n';
}

int main(void)
{
    int N;

    cin >> N;
    for (int i = N; i > 0; i--)
        draw(N, i);
    for (int i = 2; i <= N; i++)
        draw(N, i);
    return (0);
}