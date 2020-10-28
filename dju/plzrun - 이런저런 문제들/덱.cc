#include<iostream>
using namespace std;

int mod(int & n) {
	if (n > 10000) return n = 0;
	if (n < 0) return n = 10000;
	return n;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, x, dq[10001], f = 0, b = 0;
	char o[11];
	cin >> n;
	while (n--) {
		cin >> o;
		if (o[1] == 'u') {
			if (o[5] == 'f') {
				cin >> x;
				dq[mod(--f)] = x;
			}
			else if (o[5] == 'b') {
				cin >> x;
				dq[b++] = x;
				mod(b);
			}
		}
		else if (o[1] == 'o') {
			if (o[4] == 'f') {
				if (f == b) cout << "-1\n";
				else cout << dq[f++] << '\n', mod(f);
			}
			else if (o[4] == 'b') {
				if (f == b) cout << "-1\n";
				else cout << dq[mod(--b)] << '\n';
			}
		}
		else if (o[1] == 'i') {
			cout << (b >= f ? b - f : 10001 - f + b) << '\n';
		}
		else if (o[1] == 'm') {
			cout << (f == b) << '\n';
		}
		else if (o[1] == 'r') {
			if (f == b) cout << "-1\n";
			else cout << dq[f] << '\n';
		}
		else if (o[1] == 'a') {
			if (f == b) cout << "-1\n";
			else cout << dq[(b ? b - 1 : 10000)] << '\n';
		}
	}
	return 0;
}
