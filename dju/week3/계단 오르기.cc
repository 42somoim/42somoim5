#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int D[301][2], N;
vector<int> stair(301, 0);
int maxScore(int n, bool seq) {
	if (n < 1) return 0;
	if (D[n][seq]) return D[n][seq];
	return D[n][seq] = max(maxScore(n - 2, 0), (seq ? 0 : maxScore(n - 1, 1))) + stair[n];
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> stair[i];
	}
	cout << maxScore(N, 0);
	return 0;
}
