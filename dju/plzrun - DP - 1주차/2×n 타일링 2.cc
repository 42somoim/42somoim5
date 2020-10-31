#include<iostream>
using namespace std;

int D[1001];
int dp(int n) {
	if (n == 1) return 1;
	if (n == 2) return 3;
	if (D[n]) return D[n];
	return D[n] = (dp(n - 1) + dp(n - 2) * 2) % 10007;
}

int main() {
	int n;
	cin >> n;
	cout << dp(n);
	return 0;
}
