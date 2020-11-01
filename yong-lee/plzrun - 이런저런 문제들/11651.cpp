#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<pair<int, int>> s;
	while (n--) {
		int a, b;
		cin >> a >> b;
		s.insert({ b,a });
	}

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << it->second << " " << it->first << "\n";
	}
}