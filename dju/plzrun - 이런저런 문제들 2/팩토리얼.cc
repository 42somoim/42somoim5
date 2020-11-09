#include <bits/stdc++.h>

using namespace std;

int f(int n) {
	if (!n) return 1;
	return n * f(n - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cout << f(n);
}
