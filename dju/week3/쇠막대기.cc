#include<iostream>
using namespace std;

int main() {
	char input[100001];
	int s = 0, smdg = 0;
	cin >> input;
	for (int i = 0; input[i]; ++i) {
		if (input[i] == '(') {
			if (input[i + 1] == ')') s += smdg, ++i;
			else smdg++;
		}
		else if (input[i] == ')') s++, smdg--;
	}
	cout << s;
}
