#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	
	while (getline(cin, str)) {
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		
		for (int i = 0; i < str.size(); i++) {
			if ((int)str[i] < 91 && (int)str[i]>64) {
				b++;
			}
			else if ((int)str[i] > 96 && (int)str[i] < 123) {
				a++;
			}
			else if (str[i] == ' ') {
				d++;
			}
			else if ((int)str[i] > 47 && (int)str[i] < 58) {
				c++;
			}
		}
		cout << a << " " << b << " " << c << " " << d << endl;
	}
}