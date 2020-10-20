#include<cstdio>

int t, n, D[14];
int main() {
	D[0] = 1;
	scanf("%d", &t);
	for (int i = 0; i < 11; ++i) {
		D[i + 3] += D[i];
		D[i + 2] += D[i];
		D[i + 1] += D[i];
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", D[n]);
	}
}
