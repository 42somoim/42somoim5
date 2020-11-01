#include <iostream>
#include <string>
#include <set>
using namespace std;


int main() {
	int n;
	cin >> n;
	set<pair<int, pair<int, string>>> s;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;

		s.insert({ age,{i,name} });
	}

	for (auto it = s.begin(); it != s.end(); it++) {
		cout <<it->first<<" "<< it->second.second << "\n";
	}
}