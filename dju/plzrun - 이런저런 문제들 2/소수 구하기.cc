#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<int> lp(m + 1);
	vector<int> pr;

	for(int i=2; i<=m; ++i) {
		if (!lp[i]) pr.push_back(lp[i] = i);
		for(int j : pr) {
			if (j>lp[i] || i*j>m) break;
			lp[i * j] = j;
		}
	}
	auto lb = lower_bound(pr.begin(), pr.end(), n);
	while(lb != pr.end()) cout << *lb++ << '\n';
}
