#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int idx = 0;

    cin >> str;
    while (str[idx])
    {
        cout << str[idx++];
        if (idx % 10 == 0)
            cout << '\n';
    }
    return (0);
}