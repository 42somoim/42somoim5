#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char> st;
	string str;
	cin >> str;
	int sum = 0;
	char before = '(';
	for (int i = 0; i < str.size(); i++) {
		if (str[i]=='(') {
			st.push('(');
			before = '(';
		}
		if (str[i] == ')') {
			st.pop();
			if (before == ')') {
				sum++;
			}
			else {
				if (st.size() != 0) {
					sum += st.size();
				}
			}
			before = ')';
		}
	}

	cout << sum;

}