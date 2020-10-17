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
#define MOD 1000000009

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

#define MAXV 1000005

int cache[1000005];

int func(int x)
{
    int a = MAXV, b = MAXV, c = MAXV;

    if (x <= 1)
        return 0;

    if (cache[x] != -1)
        return cache[x];

    if (x % 3 == 0)
        a = func(x / 3);
    if (x % 2 == 0)
        b = func(x / 2);
    c = func(x - 1);

    return cache[x] = min({ a, b, c }) + 1;
}

int     main()
{
    int x;
    scanf("%d", &x);

    memset(cache, -1, sizeof(cache));

    printf("%d\n", func(x));

    return 0;
}