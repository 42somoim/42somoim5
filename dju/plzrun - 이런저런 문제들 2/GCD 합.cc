#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a;
	long long sum;
	vector<int> v;
	function<int(int, int)> gcd = [&](int a, int b) { return a ? gcd(b % a, a) : b; };
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		v.clear();
		sum = 0;
		while(n--){
			scanf("%d", &a);
			for(auto & i : v) sum += gcd(i, a);
			v.push_back(a);
		}
		printf("%lld\n", sum);
	}
}
