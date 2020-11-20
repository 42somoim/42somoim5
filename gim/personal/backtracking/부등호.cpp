#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define MAX 10
int N;
char temp;
string sign;

int is_valid(vector<int> v) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (sign[i] == '>' && v[i] < v[i + 1]) return (0);
        if (sign[i] == '<' && v[i] > v[i + 1]) return (0);
    }
    return (1);
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> max_v, min_v;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        sign.push_back(temp);
    }
    for (int i = 0; i <= N; i++) {
        max_v.push_back(9 - i);
        min_v.push_back(i);
    }
    while (!is_valid(max_v))
        prev_permutation(max_v.begin(), max_v.end());
    while (!is_valid(min_v))
        next_permutation(min_v.begin(), min_v.end());
    for (int i = 0; i <= N; i++)
        cout << max_v[i];
    cout << '\n';
    for (int i = 0; i <= N; i++)
        cout << min_v[i];
    cout << '\n';
    return (0);
}