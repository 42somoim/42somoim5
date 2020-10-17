#include <iostream>
using namespace std;
#define div 10007

int arr[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= 1000; i++) {
		if (i == 1) {
			arr[i] = 1;
			continue;
		}
		if (i == 2) {
			arr[i] = 2;
			continue;
		}
		arr[i] = (arr[i - 1] + arr[i - 2])%div;
	}
	cout << arr[n];
}