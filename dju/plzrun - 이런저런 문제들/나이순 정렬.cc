#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct USERINFO {
	int age, id;
	string name;
	bool operator<(const USERINFO & a) {
		if (age != a.age) return age < a.age;
		return id < a.id;
	}
} user[100000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, age;
	string name;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> user[i].age >> user[i].name;
		user[i].id = i;
	}
	sort(user, user + n);
	for (int i = 0; i < n; ++i) {
		cout << user[i].age << ' ' << user[i].name << '\n';
	}
}
