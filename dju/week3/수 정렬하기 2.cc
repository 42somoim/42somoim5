#include<iostream>
#include<algorithm>
using namespace std;

int a[1000001], n;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; ++i) cout << a[i] << '\n';
	return 0;
}
