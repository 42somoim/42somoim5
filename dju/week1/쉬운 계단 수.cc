#include<cstdio>
#include<cstring>

const int mod = 1e9;

int D[10][101];
int dp(int l, int n) {
	int& ref = D[l][n];
	if (ref != -1) return ref;
	if (n == 1) {
		return ref = l ? 1 : 0;
	}
	if (l == 0) return ref = dp(1, n - 1);
	if (l == 9) return ref = dp(8, n - 1);
	return ref = (dp(l - 1, n - 1) + dp(l + 1, n - 1)) % mod;
}

int main() {
	memset(D, -1, sizeof D);
	int n, ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < 10; ++i)
        ans = (ans + dp(i, n)) % mod;
	printf("%d", ans);
}
