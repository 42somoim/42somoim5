#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) cout << ' ';
		cout << '*';
		if (i > 1) {
			for (int j = 0; j < i * 2 - 3; ++j) cout << ' ';
			cout << '*';
		}
		cout << '\n';
	}
	for (int i = 0; i < n * 2 - 1; ++i) cout << '*';
}
