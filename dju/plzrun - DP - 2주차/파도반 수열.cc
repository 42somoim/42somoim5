#include<iostream>
using namespace std;

long long D[101] = { 0,1,1,1,2, };
long long dp(int n) {
	if (!n || D[n]) return D[n];
	return D[n] = dp(n - 1) + dp(n - 5);
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << dp(n) << '\n';
	}
	return 0;
}
