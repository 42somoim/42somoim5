#include <iostream>
using namespace std;

int arr[1001][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 10; i++) {
		arr[1][i] = 1;
	}
	
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				arr[i][j] += arr[i - 1][k];
				arr[i][j] %= 10007;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[n][i];
		sum %= 10007;
	}

	cout << sum;

}