#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, x, q[10001], f = 0, b = 0;
	char o[6];
	cin >> n;
	while (n--) {
		cin >> o;
		if (o[1] == 'u') {
			cin >> x;
			q[b++] = x;
		}
		else if (o[1] == 'o') {
			if (f == b) cout << "-1\n";
			else cout << q[f++] << '\n';
		}
		else if (o[1] == 'i') {
			cout << b - f << '\n';
		}
		else if (o[1] == 'm') {
			cout << (b == f) << '\n';
		}
		else if (o[1] == 'r') {
			if (f == b) cout << "-1\n";
			else cout << q[f] << '\n';
		}
		else if (o[1] == 'a') {
			if (f == b) cout << "-1\n";
			else cout << q[b - 1] << '\n';
		}
	}
	return 0;
}
