#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

#define mod 1000000

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    int dp[5001];
    int arr[5001];
    int len, n;

    cin >> str;
    len = str.length();
    dp[0] = 1;
    for (int i = 0; str[i]; i++)
        arr[i + 1] = str[i] - '0';
    for (int i = 1; i <= len; i++)
    {
        if (arr[i])
            dp[i] = (dp[i] + dp[i - 1]) % mod;
        n = arr[i] + (arr[i - 1] * 10);
        if (n >= 10 && n <= 26)
            dp[i] = (dp[i] + dp[i - 2]) % mod;
    }
    cout << dp[len] << '\n';
    return (0);
}