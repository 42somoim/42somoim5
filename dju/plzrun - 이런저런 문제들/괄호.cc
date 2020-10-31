#include<iostream>
using namespace std;

bool isVPS(char * ps) {
	char st[51], s = 0;
	for (int i = 0; ps[i]; ++i) {
		if (ps[i] == '(') st[++s] = '(';
		else if (ps[i] == ')') {
			if (!s) return 0;
			if (st[s] == '(') s--;
		}
	}
	return s ? 0 : 1;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	char ps[51];
	int T;
	cin >> T;
	while (T--) {
		cin >> ps;
		cout << (isVPS(ps) ? "YES" : "NO") << '\n';
	}
	return 0;
}
