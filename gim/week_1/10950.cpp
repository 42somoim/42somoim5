#include <iostream>

using namespace std;

int main(void)
{
    int case_n, a, b;

    cin >> case_n;
    while (case_n--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return (0);
}