#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int max_score(const vector<vector<int>> & sticker) {
	vector<int> pre(3, 0), cur(3, 0);
	for (int i = 0; i < sticker[0].size(); ++i) {
		cur[0] = max(pre[1], pre[2]) + sticker[0][i];
		cur[1] = max(pre[0], pre[2]) + sticker[1][i];
		cur[2] = max(pre[0], pre[1]);
		swap(cur, pre);
	}
	return *max_element(pre.begin(), pre.end());
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t, n;
	vector<vector<int>> sticker;
	cin >> t;
	while (t--) {
		cin >> n;
		sticker.clear();
		sticker.resize(2, vector<int>(n));
		for (int i = 0; i < n; ++i) {
			cin >> sticker[0][i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> sticker[1][i];
		}
		cout << max_score(sticker) << '\n';
	}
	return 0;
}
