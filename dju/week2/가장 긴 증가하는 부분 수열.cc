#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lis(const vector<int> & v) {
	vector<int> l;
	l.push_back(-1e9);
	for (int i : v) {
		if (l.back() < i) l.push_back(i);
		else *lower_bound(l.begin(), l.end(), i) = i;
	}
	return l.size() - 1;
}
int main() {
	vector<int> v;
	int n;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	cout << lis(v);
	return 0;
}
