#include <bits/stdc++.h>
using namespace std;

void go(int a){
	if (!a) return;
	if (a < 0 && (a & 1)) {
		go((a - 1) / - 2);
		printf("1");
	} else {
		go(a / -2);
		printf("%d", abs(a % 2));
	}
}
int main() {
	int a;
	scanf("%d", &a);
	if (!a) return !puts("0");
	go(a);
}
