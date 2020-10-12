#include <iostream>

using namespace std;

int main(void)
{
    int a, b, T;

    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": ";
        cout << a << " + " << b << " = " << a + b << '\n';
    }
    return (0);
}