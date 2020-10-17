#include<cstdio>

int n, x, min = 1e9, max = -1e9;

int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (min > x) min = x;
		if (max < x) max = x;
	}
	printf("%d %d", min, max);
}
