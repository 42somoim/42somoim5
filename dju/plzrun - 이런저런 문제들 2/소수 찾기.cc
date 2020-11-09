#include<iostream>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return 0;
	if (!(n & 1)) return n == 2;
	for (int i = 3; i*i <= n; i += 2) {
		if (!(n % i)) return 0;
	}
	return 1;
}

int main() {
	int n, x, c = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		c += isPrime(x);
	}
	cout << c;
	return 0;
}
