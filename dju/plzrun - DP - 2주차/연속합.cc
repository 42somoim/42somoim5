#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int n, i, ps = 0, as = -1e9;
	cin >> n;
	while (n--) {
		cin >> i;
		ps += i;
		if (as < ps) as = ps;
		if (ps < 0) ps = 0;
	}
	cout << as;
}
