#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

#define MAX 1001

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    int dp[MAX][MAX];

    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (s1[i] == s2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
    cout << dp[len1][len2] << '\n';
    return (0);
}