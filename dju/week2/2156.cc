#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, v[10001];
int d[10001][2];
int dp(int i, int p) {
	if (i >= n) return 0;
	if (d[i][p]) return d[i][p];
	return d[i][p] = max(dp(i + 1, 0), (p ? dp(i + 2, 0) : dp(i + 1, 1)) + v[i]);
}
int main() {
	ios_base::sync_with_stdio(false);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> v[i];
	cout << dp(0, 0);
}
