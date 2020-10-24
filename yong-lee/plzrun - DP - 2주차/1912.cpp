#include <iostream>
using namespace std;
int arr[1000001];
int dp[1000001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int max = arr[0];
	int sum = 0;
	dp[0] = arr[0];
	for (int i = 1; i < n; i++) {
		if (dp[i - 1]<0) {
			dp[i] = arr[i];
		}
		else {
			dp[i] = dp[i - 1] + arr[i];
		}
		if (max < dp[i]) {
			max = dp[i];
		}
	}

	cout << max;

}