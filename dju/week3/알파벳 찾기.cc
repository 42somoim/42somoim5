#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string input;
	vector<int> hasimete(26, -1);
	cin >> input;
	for (int i = 0; i < input.size(); ++i) {
		if (hasimete[input[i] - 'a'] == -1)
			hasimete[input[i] - 'a'] = i;
	}
	for (int i : hasimete) cout << i << ' ';
	return 0;
}
