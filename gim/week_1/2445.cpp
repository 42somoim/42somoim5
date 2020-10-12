#include <iostream>

using namespace std;

void draw(int N, int i)
{
    int star, blank;

    for (star = 0; star < i; star++)
        cout << '*';
    for (blank = 0; blank < 2 * (N - i); blank++)
        cout << ' ';
    for (star = 0; star < i; star++)
        cout << '*';
    cout << '\n';
}

int main(void)
{
    int N;

    cin >> N;
    for (int i = 1; i < N; i++)
        draw(N, i);
    for (int i = N; i > 0; i--)
        draw(N, i);
    return (0);
}