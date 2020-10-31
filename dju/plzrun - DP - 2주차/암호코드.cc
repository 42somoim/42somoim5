#include<iostream>
using namespace std;

char cipher[5001];
int n, dp[5001];
const int MOD = 1e6;

int decrypt_case(int n) {
	if (n < 1) return 1;
	int & ref = dp[n];
	if (ref) return ref;
	if (cipher[n] != '0') ref = decrypt_case(n - 1);
	if (cipher[n - 1] == '1' || (cipher[n - 1] == '2' && cipher[n] <= '6'))
		ref = (ref + decrypt_case(n - 2)) % MOD;
	return ref;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	cin >> cipher;
	for (; cipher[n]; ++n);
	cout << (cipher[0] == '0' ? 0 : decrypt_case(n - 1));

	return 0;
}
