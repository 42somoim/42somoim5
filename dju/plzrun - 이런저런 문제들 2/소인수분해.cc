#include<cstdio>

int n;
int main() {
	scanf("%d", &n);
	for (int i = 2; i * i <= n; ++i) {
		while (n % i == 0) {
			n /= i;
			printf("%d\n", i);
		}
	}
	if (n > 1) printf("%d", n);
}
