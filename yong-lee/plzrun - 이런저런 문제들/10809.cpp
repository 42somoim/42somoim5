#include <iostream>
#include <string>
using namespace std;

int main() {
	string st;

	cin >> st;

	char arr[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < st.length(); j++) {
			if (arr[i] == st[j]) {
				cout << j << " ";
				break;
			}
			else if (j == st.length() - 1) {
				cout << -1 << " ";
			}
		}
	}

}
