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
#define MOD 10007

using namespace std;
using i64 = long long int;
using ii = pair<int, int>;
using ii64 = pair<i64, i64>;
using iii = tuple<int, int, int>;

int cache[15];
int ans;

int     main()
{
    int t;
    scanf("%d", &t);

    memset(cache, -1, sizeof(cache));

    cache[1] = 1;
    cache[2] = 2;
    cache[3] = 4;

    for (int i = 4; i < 11; i++)
    {
        cache[i] = cache[i - 1] + cache[i - 2] + cache[i - 3];
    }

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", cache[n]);
    }
    

    return 0;
}