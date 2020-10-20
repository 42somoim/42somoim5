#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lds(vector<int>& v) {
	vector<int> ans = { (int)-1e9 };
	for (int i : v) {
		if (ans.back() < i) ans.push_back(i);
		else *lower_bound(ans.begin(), ans.end(), i) = i;
	}
	return ans.size() - 1;
}
int main() {
	int n, x;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		v.push_back(-x);
	}
	cout << lds(v);
}
