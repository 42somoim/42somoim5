#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Student{
	string name;
	int korean;
	int english;
	int math;
};

Student arr[100001];


bool cmp(const Student &t1, const Student &t2) {
	if (t1.korean == t2.korean) {
		if (t1.english == t2.english) {
			if (t1.math == t2.math) {
				return t1.name < t2.name;
			}
			return t1.math > t2.math;
		}
		return t1.english < t2.english;
	}
	return t1.korean > t2.korean;
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].name >> arr[i].korean >> arr[i].english >> arr[i].math;
	}

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << arr[i].name << "\n";
	}
}
