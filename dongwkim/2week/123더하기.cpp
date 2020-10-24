#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++)
    {
        int n;
        cin >> n;
        int dp[12] = {0, 1, 2, 4};
        for (int i = 4; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        cout << dp[n] << endl;
    }
}