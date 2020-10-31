#include<iostream>
using namespace std;

int main() {
	int n, r = 0;
	char input[101];
	cin >> n >> input;
	for (int i = 0; i < n; ++i)
		r += input[i] & 15;
	cout << r;
	return 0;
}
