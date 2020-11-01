#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int arr[27] = { 0, };
	for (int i = 0; i < str.size(); i++) {
		int a;
		a = (int)str[i] - 96;
		arr[a]++;
	}

	for (int i = 1; i < 27; i++) {
		cout << arr[i] << " ";
	}
}