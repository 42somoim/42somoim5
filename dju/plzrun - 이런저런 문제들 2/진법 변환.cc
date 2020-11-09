#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int b, res = 0;
	cin >> s >> b;
	reverse(s.begin(), s.end());
	for(int i =s.size() - 1; ~i; --i) {
		res += (isdigit(s[i]) ? s[i] & 15 : s[i] - 'A' + 10) * pow(b, i);
	}
	cout << res;
}
