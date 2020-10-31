#include <bits/stdc++.h>

using namespace std;

int st[1 << 18];
void update(int p, int x, int i = 1, int l = 1, int r = 1 << 17) {
	if (l == r) {
		st[i] += x;
	} else {
		int m = l + r >> 1;
		if (p <= m) update(p, x, i << 1, l, m);
		else update(p, x, i << 1 | 1, m + 1, r);
		st[i] = st[i << 1] + st[i << 1 | 1];
	}
}
int query(int s, int e, int i = 1, int l = 1, int r = 1 << 17) {
	if (e < l || r < s) return 0;
	if (s <= l && r <= e) return st[i];
	int m = l + r >> 1;
	return query(s, e, i << 1, l, m) + query(s, e, i << 1 | 1, m + 1, r);
}
int kth(int k, int i = 1, int l = 1, int r = 1 << 17) {
	if (l == r) return r;
	int m = l + r >> 1;
	if (k <= st[i << 1]) return kth(k, i << 1, l, m);
	return kth(k - st[i << 1], i << 1 | 1, m + 1, r);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		update(i, 1);
	}
	int k = m;
	cout << '<';
	for (int i = 1; i < n; ++i) {
		int tmp = kth(k);
		cout << tmp << ", ";
		update(tmp, -1);
		if (query(tmp, n) < m)
			k = (m - query(tmp, n) - 1) % (n - i) + 1;
		else k += m - 1;
	}
	cout << kth(1) << '>';
}
