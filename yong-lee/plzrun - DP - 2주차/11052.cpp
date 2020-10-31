#include<iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[10001];


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			dp[j] = max(dp[j], dp[j - i] + arr[i]);
		}
	}
	cout << dp[n];
}