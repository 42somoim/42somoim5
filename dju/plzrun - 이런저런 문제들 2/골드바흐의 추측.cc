#include<cstdio>
#include<vector>
#include<bitset>
using namespace std;

bitset<1000000> prm;
int n;
int main() {
	for (int i = 3; i < 999999; ++i) {
		if (prm[i]) continue;
		for (int j = i + i; j < 999999; j += i)
			prm[j] = 1;
	}
	while (scanf("%d", &n)) {
		if (!n) break;
		bool found = 0;
		for (int p = 3; p + p <= n; p += 2) {
			if (!prm[p] && !prm[n - p]) {
				printf("%d = %d + %d\n", n, p, n - p);
				found = 1;
				break;
			}
		}
		if (!found) puts("Goldbach's conjecture is wrong.");
	}
}
