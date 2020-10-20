#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int D[1001], A[1001], N, res;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	for (int i = 0; i < N; ++i) {
		if (!D[i]) D[i] = A[i];
		for (int j = i + 1; j < N; ++j) {
			if (A[i] < A[j]) {
				D[j] = max(D[j], D[i] + A[j]);
			}
		}
	}
	for (int i = 0; i < N; ++i) res = max(res, D[i]);
	cout << res;
	return 0;
}
