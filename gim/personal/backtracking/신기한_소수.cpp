#include <iostream>
#include <cstdio>

using namespace std;

int N;

bool check_prime(int n) {
    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0)
            return (false);
    }
    return (true);
}

void find_primes(int first, int idx) {
    if (idx == N) {
        printf("%d\n", first);
        return ;
    }
    for (int i = 1; i <= 9; i += 2) {
        first = first * 10 + i;
        if (check_prime(first))
            find_primes(first, idx + 1);
        first /= 10;
    }
}

int main(void) {
    int first[] = {2, 3, 5, 7};

    scanf("%d", &N);
    for (int i = 0; i < 4; i++) {
        find_primes(first[i], 1);
    }
    return (0);
}