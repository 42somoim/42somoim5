#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int n;
	pair<int, int> dot[100001];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &dot[i].second, &dot[i].first);
	}
	sort(dot, dot + n);
	for (int i = 0; i < n; ++i) {
		printf("%d %d\n", dot[i].second, dot[i].first);
	}
}
