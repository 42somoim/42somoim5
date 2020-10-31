#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int arr[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j*j <= i; j++) {
			arr[i] = min(arr[i], 1 + arr[i - j * j]);
		}
	}

	cout << arr[n];
}