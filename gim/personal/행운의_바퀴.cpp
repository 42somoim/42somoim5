#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    int N, K, S, idx = 0;
    char c;

    scanf("%d %d", &N, &K);
    vector<char> v(N);
    fill(v.begin(), v.end(), '?');
    for (int i = 0; i < K; i++)
    {
        scanf("%d %c", &S, &c);
        S %= N;
        idx = idx - S < 0 ? (idx - S) + N : idx - S;
        if (v[idx] != '?' && v[idx] != c){
            puts("!");
            return (0);
        }
        v[idx] = c;
        for (int i = 0; i < N - 1; i++){
            for (int j = i + 1; j < N; j++){
                if (v[i] != '?' && v[i] == v[j])
                {
                    puts("!");
                    return (0);
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
        printf("%c", v[(idx + i) % N]);
    printf("\n");
    return (0);
}