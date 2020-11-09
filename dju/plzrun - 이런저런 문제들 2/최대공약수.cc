#include<iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if (!b) return a;
	return gcd(b, a % b);
}
char output[10000001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	for (int i = 0; i < g; ++i) output[i] = '1';
	output[g] = 0;
	cout << output;
	return 0;
}
