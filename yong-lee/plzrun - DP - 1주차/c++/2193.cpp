#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<pair<ll, ll>> v(91);



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	v[1] = { 1,0 };
	v[2] = { 0,1 };
	
	int n;
	cin >> n;

	for (int i = 1; i <= 90; i++) {
		if (i == 1) {
			v[i] = { 1,0 };
			continue;
		}
			
		if (i == 2) {
			v[i] = { 0,1 };
			continue;
		}

		v[i] = { v[i - 1].second, v[i - 1].first + v[i - 1].second };
		
	}

	cout << v[n].first + v[n].second;
	

}