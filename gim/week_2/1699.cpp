#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int N, root, cnt = 0;

    scanf("%d", &N);
    while (N)
    {
        root = sqrt(N);
        N -= pow(root, 2);
        cnt++;
    }
    printf("%d\n", cnt);
    return (0);
}