#include<cstdio>
#include<vector>
using namespace std;

vector<int> D[1001];
vector<int> dp(int n) {
	if (n == 1) return vector<int>(10, 1);
	if (D[n].size()) return D[n];
	auto n_1 = dp(n - 1);
	for (int i = 1; i < 10; ++i) {
		n_1[i] = (n_1[i] + n_1[i - 1]) % 10007;
	}
	return D[n] = n_1;
}

int main() {
	int n, sum = 0;
    scanf("%d", &n);
	auto res = dp(n);
	for (int i : res) {
		sum = (sum + i) % 10007;
	}
    printf("%d", sum);
}
