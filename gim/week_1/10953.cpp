#include <iostream>

using namespace std;

int main(void)
{
    int a, b, T;
    char c;

    cin >> T;
    while (T--)
    {
        cin >> a >> c >> b;
        cout << a + b << '\n';
    }
    return (0);
}