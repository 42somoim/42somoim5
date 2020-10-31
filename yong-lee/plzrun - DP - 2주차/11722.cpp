#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int ans = 1;
	dp[1] = 1;
	for (int i = 1; i <= n; i++) {
		int here = 0;
		for (int j = 1; j < i; j++) {
			if (arr[j] > arr[i]) {
				here = max(here, dp[j]);
			}
			dp[i] = here + 1;
			ans = max(ans, dp[i]);
		}
	}
	cout << ans;

}