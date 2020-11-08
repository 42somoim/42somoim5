#include<cstdio>
const int otob[] = { 0,1,10,11,100,101,110,111 };
char n[333335];
int main() {
	scanf("%s", n);
	printf("%d", otob[n[0] - '0']);
	for (int i = 1; n[i]; ++i)
		printf("%03d", otob[n[i] - '0']);
}
