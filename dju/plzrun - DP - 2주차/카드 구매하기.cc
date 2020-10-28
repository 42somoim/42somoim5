#include<iostream>
#include<algorithm>
using namespace std;

int D[1001], P[1001], N;
int dp(int n) {
	int & ref = D[n];
	if (ref) return ref;
	for (int i = 1; i <= n; ++i) {
		ref = max(ref, dp(n - i) + P[i]);
	}
	return ref;
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> P[i];
	cout << dp(N);
	return 0;
}
