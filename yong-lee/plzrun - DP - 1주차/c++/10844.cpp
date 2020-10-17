#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000000

int dp[101][10];
int sum;


int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				dp[i][0] = dp[i - 1][1] % mod;
			}
			else if (j == 9) {
				dp[i][9] = dp[i - 1][8] % mod;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
		sum %= mod;
	}
	cout << sum;

}