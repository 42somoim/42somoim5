#include<iostream>
#include<vector>
using namespace std;

const int MOD = 1e9;

int N, K;
vector<vector<int>> dp;
int cases(int n, int k) {
	if (k == 1) return 1;
	int & ref = dp[n][k];
	if (ref != -1) return ref;
	ref = 0;
	for (int i = 0; i <= n; ++i) {
		ref = (ref + cases(n - i, k - 1)) % MOD;
	}
	return ref;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> K;
	dp.resize(N + 1, vector<int>(K + 1, -1));
	cout << cases(N, K);
	return 0;
}
