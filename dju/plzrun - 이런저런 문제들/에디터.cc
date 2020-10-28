#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
	list<char> li;
	list<char>::iterator it;
	string input;
	int n;
	char o, x;
	cin >> input;
	for (char c : input) {
		li.push_back(c);
	}
	it = li.end();
	cin >> n;
	while (n--) {
		cin >> o;
		if (o == 'L') {
			if (it != li.begin()) it--;
		}
		else if (o == 'D') {
			if (it != li.end()) it++;
		}
		else if (o == 'B') {
			if (it != li.begin()) {
				li.erase(prev(it));
			}
		}
		else if (o == 'P') {
			cin >> x;
			li.insert(it, x);
		}
	}
	for (auto c : li)
		cout << c;
}
