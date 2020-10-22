#include <iostream>
#include <vector>

using namespace std;
const int MOD = 1e9;

int main() {
    int N, K;
    cin >> N >> K;


    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    for (int i = 0; i <= N; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] %= MOD;
                dp[i][j] += (dp[i - 1][j - k] % MOD);
            }
        }
    }
    cout << dp[K][N];

    return 0;
}