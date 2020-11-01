#include <queue>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	queue<int> q;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}

		else if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
			}
			else {
				cout << "-1"<< endl;
			}
		}
		
		else if (str == "size") {
			cout << q.size() << endl;
		}

		else if (str == "empty") {
			cout << q.empty() << endl;
		}

		else if (str == "front") {
			if (!q.empty()) {
				cout << q.front() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (str == "back") {
			if (!q.empty()) {
				cout << q.back() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}
}
