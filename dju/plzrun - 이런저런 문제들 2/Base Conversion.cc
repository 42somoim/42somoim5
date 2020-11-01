#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, n, x, s = 0;
	scanf("%d%d%d", &a, &b, &n);
	while(n--){
		scanf("%d", &x);
		s += pow(a, n) * x;
	}
	int i = 0, c = 1, d;
	while(c < s) c *= b, i++;
	while(i--) {
		d = pow(b, i);
		printf("%d ", s / d);
		s %= d;
	}
}
