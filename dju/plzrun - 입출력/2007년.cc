#include<iostream>
using namespace std;

const int month_days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
const char day[][4] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
int main() {
	int m, d;
	cin >> m >> d;
	for (int i = 1; i < m; ++i) {
		d += month_days[i];
	}
	cout << day[d % 7];
	return 0;
}
