#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, a[10001]{};
	cin >> n;
	while (n--) {
		int x; cin >> x;
		a[x]++;
	}
	for (int i = 1; i <= 10000; ++i) {
		int c = a[i];
		while (c--)
			cout << i << '\n';
	}
}
