#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll arr[1000001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	ll value = arr[0];
	int max = 0;
	int cnt = 1;

	for (int i = 0; i < n-1; i++) {
		if (arr[i] == arr[i +1]) {
			cnt++;
		}
		if (arr[i] != arr[i +1]) {
			if (max < cnt){
				max = cnt;				
				value = arr[i];
			}
			cnt = 1;
		}
	}

	if (max < cnt) {
		max = cnt;
		cnt = 1;
		value = arr[n - 1];
	}
	cout << value;
}