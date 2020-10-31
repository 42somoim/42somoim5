#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Student {
	char name[11];
	int kor, eng, math;
	Student() {}
	Student(char * n, int k, int e, int m)
		: kor(k), eng(e), math(m) {
		strcpy(name, n);
	}
	bool operator < (const Student & b) const {
		if (kor != b.kor) return kor > b.kor;
		if (eng != b.eng) return eng < b.eng;
		if (math != b.math) return math > b.math;
		return strcmp(name, b.name) < 0;
	}
} student[100000];

int main() {
	int n, k, e, m;
	char name[11];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf(" %s%d%d%d", name, &k, &e, &m);
		student[i] = Student(name, k, e, m);
	}
	sort(student, student + n);
	for (int i = 0; i < n; ++i) {
		printf("%s\n", student[i].name);
	}
}
