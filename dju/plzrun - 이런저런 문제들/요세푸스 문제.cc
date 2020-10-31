#include<iostream>
using namespace std;

int q[5001], f, b;
void mod(int & n) {
	if (n > 5000) n = 0;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) q[b++] = i;
	cout << '<';
	while (f != b) {
		for (int i = 1; i < m; ++i) {
			q[b++] = q[f++];
			mod(b), mod(f);
		}
		cout << q[f++];
		mod(f);
		if (f != b) cout << ", ";
	}
	cout << '>';
	return 0;
}
