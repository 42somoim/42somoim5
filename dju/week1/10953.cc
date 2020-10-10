#include<iostream>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	string tc;

	cin >> t;
	while (t--) {
		cin >> tc;
		cout << (tc[0] & 15) + (tc[2] & 15) << '\n';
	}
}
