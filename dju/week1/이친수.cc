#include<cstdio>

int main() {
	int n;
	long long p = 1, np = 1;
	scanf("%d", &n);
	while (--n) {
		long long t = p;
		p = np;
		np += t;
	}
	printf("%lld", p);
}
