#include<iostream>
using namespace std;

int D[31][3];
int dp(int n, int b) {
	if (n & 1) return 0;
	if (n == 2) return 1;
	int & ref = D[n][b];
	if (ref) return ref;
	if (!b) return ref = dp(n - 2, 0) + dp(n - 2, 1) + dp(n - 2, 2);
	else return ref = dp(n, 0) + dp(n - 2, b);
}
int main() {
	int n;
	cin >> n;
	cout << dp(n, 0) + dp(n, 1) + dp(n, 2);
	return 0;
}
