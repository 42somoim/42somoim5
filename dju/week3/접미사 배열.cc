#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> v;
	for(int i =0; i<s.size(); ++i) v.push_back(s.substr(i, s.size() - i));
	sort(v.begin(), v.end());
	for(auto & i : v) cout << i << '\n';
}
