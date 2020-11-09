#include<bits/stdc++.h>
using namespace std;

int main() {
	map<string, int> dic = { {"1", 1}, {"10", 2}, {"11", 3}, {"100", 4}, {"101", 5},
	{"110", 6}, {"111", 7}, {"001", 1}, {"010", 2}, {"011", 3}, {"000", 0} };
	string bi;
	cin >> bi;
	if (bi.size() % 3) cout << dic[bi.substr(0, bi.size() % 3)];
	for (int i = bi.size() % 3; i < bi.size(); i += 3) {
		cout << dic[bi.substr(i, 3)];
	}
}
