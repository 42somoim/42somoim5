#include<cstdio>

int main() {
	int n, two = 0, five = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int t = i;
		while (t % 5 == 0) {
			five++;
			t /= 5;
		}
		while (t % 2 == 0) {
			two++;
			t /= 2;
		}
	}
	printf("%d", five > two ? two : five);
}
