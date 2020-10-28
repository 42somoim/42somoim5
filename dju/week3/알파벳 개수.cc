#include<cstdio>

char w[101];
int ab[26];
int main() {
	scanf("%s", w);
	for (int i = 0; w[i]; ++i) ab[w[i] - 'a']++;
	for (int i = 0; i < 26; ++i) printf("%d ", ab[i]);
}
