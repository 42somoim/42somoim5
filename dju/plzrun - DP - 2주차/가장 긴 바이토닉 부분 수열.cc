#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n), d(n, 1);
    for(int i =0; i<n; ++i) {
        cin >> a[i];
    }
    for(int i =0; i<n; ++i) {
        for(int j =i + 1; j<n; ++j) {
            if (a[i] < a[j]) d[j] = max(d[j], d[i] + 1);
        }
    }
    for(int i =0; i<n; ++i) {
        for(int j =i + 1; j<n; ++j) {
            if (a[i] > a[j]) d[j] = max(d[j], d[i] + 1);
        }
    }
    cout << *max_element(d.begin(), d.end());
}
