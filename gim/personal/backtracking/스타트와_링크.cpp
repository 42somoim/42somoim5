#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

#define MAX 20 + 1
int N, sum = 0;
int arr[MAX][MAX];
vector<int> v;
vector<int> t1, t2;

int get_substract() {
    int sum1 = 0, sum2 = 0;
    int len = t1.size();

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            sum1 += (arr[t1[i]][t1[j]] + arr[t1[j]][t1[i]]);
            sum2 += (arr[t2[i]][t2[j]] + arr[t2[j]][t2[i]]);
        }
    }
    return (abs(sum1 - sum2));
}

int make_min_ret() {
    int ret = 1000;

    for (int i = 0; i < N / 2; i++) v.push_back(0);
    for (int i = 0; i < N / 2; i++) v.push_back(1);
    do {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0)
                t1.push_back(i + 1);
            else
                t2.push_back(i + 1);
        }
        ret = min(ret, get_substract());
        t1.clear();
        t2.clear();
    } while (next_permutation(v.begin(), v.end()));
    return (ret);
}

int main(void) {
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", make_min_ret());
    return (0);
}