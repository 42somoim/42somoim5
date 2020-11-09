#include<cstdio>
#include<vector>
using namespace std;

int main() {
	int n, b;
	vector<int> d;
	scanf("%d %d", &n, &b);
	while (n) {
		d.push_back(n % b);
		n /= b;
	}
	for (auto it = d.rbegin(); it != d.rend(); ++it) {
		if (*it < 10) printf("%d", *it);
		else printf("%c", *it - 10 + 'A');
	}
}
