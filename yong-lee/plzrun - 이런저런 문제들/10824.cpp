#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int  a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int size1 = 0;
	int size2 = 0;
	int x = b;
	int y = d;
	while (x != 0) {
		x /= 10;
		size1++;
	}

	while (y != 0) {
		y /= 10;
		size2++;
	}

	cout << (long long)(a*pow(10, size1) + b + c*pow(10, size2) + d) << endl;
}