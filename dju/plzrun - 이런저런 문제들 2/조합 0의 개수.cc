#include<iostream>
using namespace std;

long long five(int n) {
	long long ans = 0;
	for (long long f = 5; f <= n; f *= 5) {
		ans += (n / f);
	}
	return ans;
}
long long two(int n) {
	long long ans = 0;
	for (long long t = 2; t <= n; t *= 2) {
		ans += (n / t);
	}
	return ans;
}
int main() {
	int n, m;
	cin >> n >> m;
	long long f = five(n), t = two(n);
	f -= five(m) + five(n - m);
	t -= two(m) + two(n - m);
	cout << (f > t ? t : f);
}
