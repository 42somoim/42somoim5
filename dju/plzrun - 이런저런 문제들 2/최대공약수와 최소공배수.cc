#include<cstdio>

int gcd(int a, int b) {
	while (a) {
		int t = a;
		a = b % a;
		b = t;
	}
	return b;
}
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int g = gcd(a, b);
	printf("%d\n%d", g, a * b / g);
}
