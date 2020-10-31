#include<bits/stdc++.h>

using namespace std;

string a, b, c, d;
int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> a >> b >> c >> d;
	cout << stoll(a + b) + stoll(c + d);
}
