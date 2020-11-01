#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string st;
		cin >> st;
		stack<char> v;
		for (int j = 0; j < st.length(); j++) {
			if (st[j] == '(') {
				v.push('(');
			}
			else if (st[j] == ')') {
				if (v.empty() == 1) {
					cout << "NO" << endl;
					break;
				}
				else {
					v.pop();
				}
			}
			if (j == st.length() - 1) {
				if (v.empty() == 1) {
					cout << "YES" << endl;
					break;
				}
				else {
					cout << "NO" << endl;
					break;
				}
			}
		}
	}
}