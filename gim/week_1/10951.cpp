// 테스트 케이스가 주어지지 않은 경우, EOF를 생각하자.
#include <iostream>

using namespace std;

int main(void)
{
    int a, b;

    while (cin >> a >> b)
    {
        cout << a + b << '\n';
    }
    return (0);
}