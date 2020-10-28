#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> st;
	while (n--) {
		string cmd;
		int x;
		cin >> cmd;
		if (cmd == "push") {
			cin >> x;
			st.push(x);
		} else if (cmd == "pop") {
			if (st.empty()) cout << "-1\n";
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		} else if (cmd == "size") {
			cout << st.size() << '\n';
		} else if (cmd == "empty") {
			cout << (st.empty() ? 1 : 0) << '\n';
		} else if (cmd == "top") {
			if (st.empty()) cout << "-1\n";
			else cout << st.top() << '\n';
		}
	}
}
