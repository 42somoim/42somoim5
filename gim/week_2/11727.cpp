<<<<<<< HEAD
//보류.
=======
// 보류.
>>>>>>> f5241f8edf112dfa1c10f1cc6c9999a936bc27a1
#include <iostream>
#include <cstdio>

using namespace std;

int arr[1001];

int dq(int n)
{
    if (n == 1)
        return (1);
    if (n == 2)
        return (3);
    if (arr[n] != 0)
        return (arr[n]);
    return (arr[n] = dq(n - 1) + dq(n - 2) + dq(n - 2));
}

int main(void)
{
    int N;

    scanf("%d", &N);
    printf("%d\n", dq(N));

    return (0);
}