#include<cstdio>
#include<map>
using namespace std;

int main() {
	map<long long, int> dict;
	int n, mx = 0;
	long long x, ans;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%lld", &x);
		dict[x]++;
	}
	for (auto & i : dict) {
		if (i.second > mx) {
			mx = i.second;
			ans = i.first;
		}
	}
	printf("%lld", ans);
}
