#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int & i : a) cin >> i;
	nth_element(a.begin(), a.begin() + k - 1, a.end());
	cout << a[k - 1];
}
