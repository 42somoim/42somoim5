#include <cstdio>
int main() {
    int n = 1;
    int a;
    scanf("%d", &a);
    while (n<10) {

        printf("%d * %d = %d\n",a, n, a*n);
        n++;
    }

    return 0;
}
