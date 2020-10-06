#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <bitset>

#define xx first
#define yy second
#define all(x) (x).begin(), (x).end()

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

using namespace std;

int     main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
            printf(" ");
        printf("*");
        for (int j = 1; j <= 2 * (i - 1) - 1; j++)
            printf(" ");
        if (i != 1)
            printf("*");
        printf("\n");
    }

    for (int i = 0; i < 2 * n - 1; i++)
        printf("*");

    return 0;
}