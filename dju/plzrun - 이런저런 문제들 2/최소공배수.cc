#include<cstdio>

int gcd(int a, int b) {
	if (!b) return a;
	return gcd(b, a % b);
}
int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a * b / gcd(a, b));
	}
	return 0;
}
