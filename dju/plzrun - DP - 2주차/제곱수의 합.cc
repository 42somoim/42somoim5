#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sqs;
int D[100001];
int dp(int n) {
	if (n < 0) return 1e9;
	if (!n) return 0;
	if (D[n]) return D[n];
	D[n] = 1e9;
	for (int & s : sqs) {
        if (s > n) break;
		D[n] = min(D[n], dp(n - s) + 1);
	}
	return D[n];
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	for (int i = 1; i < 317; ++i) sqs.push_back(i * i);
	int n;
	cin >> n;
	cout << dp(n);
	return 0;
}
