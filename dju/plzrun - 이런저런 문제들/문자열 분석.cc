#include<iostream>
#include<string>

std::string w;
int ans[4];
int main() {

	while (std::getline(std::cin, w)) {
		for (int i = 0; w[i]; ++i) {
			if (w[i] == ' ') ans[3]++;
			else if (w[i] >= 48 && w[i] <= 57) ans[2]++;
			else if (w[i] >= 65 && w[i] <= 92) ans[1]++;
			else if (w[i] >= 97 && w[i] <= 122)ans[0]++;
		}
		for (int i = 0; i < 4; ++i) {
			printf("%d ", ans[i]);
			ans[i] = 0;
		}
		printf("\n");
	}
}
