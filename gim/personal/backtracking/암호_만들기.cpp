#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 15 + 1

string letters, str;
vector<string> v;
int len, n;
char temp, dp[MAX];
bool visit[MAX];

bool exist_vowel() {
    string vowels = "aeiou";
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < vowels.length(); j++) {
            if (dp[i] == vowels[j])
                cnt++;
        }
    }
    if (cnt >= 1 && len - cnt >= 2)
        return (true);
    return (false);
}

void dfs(int idx) {
    if (idx == len) {
        if (exist_vowel()) {
            for (int i = 0; i < len; i++)
                str.push_back(dp[i]);
            v.push_back(str);
            str.clear();
        }
        return ;
    }
    for (int i = 0; i < letters.length(); i++) {
        if (visit[i] || (idx > 0 && letters[i] < dp[idx - 1]))
            continue;
        visit[i] = true;
        dp[idx] = letters[i];
        dfs(idx + 1);
        visit[i] = false;
    }
}

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> len >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        letters.push_back(temp);
    }
    dfs(0);
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
    return (0);
}