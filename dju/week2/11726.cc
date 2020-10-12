#include<cstdio>

const int mod = 10007;

int D[1001];
int dp(int n) {
	int & ref = D[n];
	if (ref) return ref;
	if (n <= 1) return ref = 1;
	return ref = (dp(n - 1) + dp(n - 2)) % mod;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", dp(n));
}
