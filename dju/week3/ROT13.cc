#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for(char & c : s) {
		if (isalpha(c)) {
			if (isupper(c))
				c += c < 'A' + 13 ? 13 : -13;
			else c += c < 'a' + 13 ? 13 : -13;
		}
	}
	cout << s;
}
